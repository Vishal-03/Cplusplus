#include<bits/stdc++.h>
	using namespace std;
	
	int main(){

	    ios::sync_with_stdio(false);
	    cin.tie(0);
	    cout.tie(0);
	
	// int a[] = {-2,-3,4,-1,-2,1,5,-3};
	// int n = sizeof(a) / sizeof(int);
	    int n; cin >> n;
	    int a[n];
	int sum = 0;
	int maxsum = a[0];
	for(int i = 0; i < n; i++){
		sum += a[i];
		if(sum < 0)	sum = 0;
		maxsum = max(maxsum,sum);
	
	}
	cout << maxsum;
	   
	  return 0 ;

	}