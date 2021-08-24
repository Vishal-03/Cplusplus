#include<bits/stdc++.h>
	using namespace std;
	
	int main(){

	    ios::sync_with_stdio(false);
	    cin.tie(0);
	    cout.tie(0);
	
	int a[] = {1,2,3,4};
	int n = sizeof(a) / sizeof(int);

	for(int i = 0 ; i < n ; i++){
		for(int j = i ; j < n ; j++){
			for(int k = i ; k <= j ; k++){
				cout << a[k] << " ";
			}
			cout << endl;
		}
	}
	    
	  return 0 ;

	}