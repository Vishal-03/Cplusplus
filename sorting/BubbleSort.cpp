#include<bits/stdc++.h>
	using namespace std;
	
	//Bubble sort

	void BubbleSort(int a[] , int n){

		for(int i = 0 ; i< n ; i++){

			for(int j = 0 ; j < n ; j++){

				if(a[j] > a[j+1]){

					swap(a[j],a[j+1]);
				}

			}

		}

	}
	
	int main(){

	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n; cin >> n;

	for(int i = 0 ; i < n ;i++){

		cin >> a[i];

	}

	BubbleSort(a , n);

	for(int val : a){

	    	cout << val << " ";
	}

	  return 0 ;

}