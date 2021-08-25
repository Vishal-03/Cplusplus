#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x

using namespace std;
/*==============================================================================================================================================================================*/
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt" , "w" , stderr);
      #define debug(x) cerr << #x << " " << x << endl;
      #else
      #define debug(x)
    #endif 
}

int Peak_element(int *a , int n){
	int lo = 0;
	int hi = n-1;

	while(lo<=hi){
		int mid = (lo+hi)/2;
		if(a[mid] > 0 && a[mid] < n-1){
			if(a[mid] > a[mid-1] && a[mid] > a[mid+1]){
				return mid;
			}
			else if(a[mid-1] > a[mid]) hi = mid-1;
			else if(a[mid+1] < a[mid]) lo = mid+1;
		}else if(mid == 0){
			if(a[0] > a[1]) return 0;
			else return 1;
		}else if(mid == n-1){
			if(a[n-1] > a[n-2]) return n-1;
			else return n-2;
		}
	}
}
 
int main() {
   init_code();
   	int n;
   	cin >> n;
   
   	int a[n];
   	for(int i=0;i<n;i++){
   		cin >> a[i];
   	}

   cout << Peak_element(a,n);
  
   return 0;
}
