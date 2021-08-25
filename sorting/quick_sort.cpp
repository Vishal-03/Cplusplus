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

void swap(int *a , int i , int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int *a , int pivot , int lo , int hi){
    int i = lo;
    int j = lo;
    while(i <= hi){
        if(a[i] <= pivot){
            swap(a,i,j);
            i++;
            j++;
        }else{
            i++;
        }
    }
    return (j-1);
}

void quickSort(int *a , int lo , int hi ){
    if(lo > hi){
        return;
    }
    int pivot = a[hi];
    int pi = partition(a , pivot , lo, hi);
    quickSort(a,lo,pi-1);
    quickSort(a,pi+1,hi);
}
 
int main() {
   init_code();
	
	int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    quickSort(a, 0 , n-1 );
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
   return 0;
}
