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
 

// sort an array of 0's,1's,2's without using extra space or sorting algorithm


 void sort012(vector<int>& nums) {
        auto low = nums.begin();
        auto mid = nums.begin();
        auto high = nums.end()-1;
        
        while(mid <= high){
            if((*mid) == 0){
                swap((*low) , (*mid));
                low++;
                mid++;
            }else if((*mid) == 1){
                mid++;
            }else{
                swap((*high),(*mid));
                high--;
            }
        }
        
        for(auto it = nums.begin() ; it != nums.end()-1 ; it++){
            cout << (*it) << " ";
        }
    }

int main() {
   init_code();

   int n;cin >> n;
 	vector<int> nums;
 	for(int i=0;i<n;i++){
 		int x;
 		cin >> x;
 		nums.push_back(x);
 	}
	sort012(nums);  
   return 0;
}
