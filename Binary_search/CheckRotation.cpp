#include<bits/stdc++.h>
	using namespace std;

	int checkRotated (int a[], int n){
		int min = INT_MAX;
		int minIndex = -1;
		for(int i = 0 ; i < n ; i++){
			if(a[i] < min){
				min = a[i];
				minIndex = i;
			}
		}
		return minIndex;
	}
	
	int main(){

	    ios::sync_with_stdio(false);
	    cin.tie(0);
	    cout.tie(0);
	int T; cin >> T;
	while(T--){

	int n; cin >> n;

	int a[n];

	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}

	cout << checkRotated(a , n);
	cout << endl;
}


	    
	  return 0 ;

	}