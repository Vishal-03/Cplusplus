#include<bits/stdc++.h>
	using namespace std;

	int BinarySearch(int a[] , int n, int key){

		int start = 0;

		int end = n - 1;
		
			while(start <= end){

					int mid = start + (end - start)/2;  //to prevent overflow while taking mid as (start+end)/2;

						if(a[mid] == key){

							return mid;
						}

						else if(a[mid] < key){

							end = mid - 1;
						}

						else if(a[mid] > key){

							start = mid + 1;

						}

				}

		return -1;

}
	
	int main(){

	//Faster input and output

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


	int a[] = {7,6,5,4,3,2,1};

	int n = sizeof(a) / sizeof(int);

	int key; cin >> key;

	cout << (BinarySearch(a, n , key)); 
	   
	  return 0 ;

}