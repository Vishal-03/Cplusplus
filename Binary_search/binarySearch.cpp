#include<bits/stdc++.h>
	using namespace std;
	

	#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
	
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

	int binarySearch(vector<int> v ,int n, int key){
		int lo = 0;
		int hi = n-1;

		int mid;
		while(hi - lo < 1){
			mid = (lo+hi)/2;

			if(v[mid] == key) return mid;
			else if(v[mid] < key) lo = mid+1;
			else  hi = mid;
		}
		return -1;
	}

	int main(){

		init_code();
	   
	   	int n; cin >> n;

	   	vector<int> v(n);

	   	for(int i=0;i<n;i++){
	   		int x; cin >> x;
	   		v.push_back(x);
	   	}

	   	int key;
	   	cin >> key;

	   cout <<binarySearch(v,n,key);

	  return 0 ;

	}