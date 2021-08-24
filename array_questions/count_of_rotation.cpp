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
   
   int Number_of_times_array_is_sorted(int a[] , int n){
      int lo = 0;
      int hi = n-1;

      if(n == 1){
         // array is not rotated
         return 0;
      }

      if(a[lo] <= a[hi]){
         return 0;
      }

      while(lo <= hi){
         int mid = (lo+hi)/2;
         if(a[mid] > a[mid+1]) return mid+1;
         else if(a[mid] < a[mid-1]) return mid-1;
         else if(a[lo] <= a[mid]) lo = mid+1;
         else if(a[hi] >= a[mid]) hi = mid-1;
      }
      return -1;
   }
 
int main() {
   init_code();
      
      int n;
      cin >> n;
      int a[n];
      for(int i=0;i<n;i++){
         cin >> a[i];
      }
      
      cout << Number_of_times_array_is_sorted(a,n);


      return 0;
}
