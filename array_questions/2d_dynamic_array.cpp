#include<bits/stdc++.h>
	using namespace std;
	
	

	int main(){

		

	    ios::sync_with_stdio(false);
	    cin.tie(0);
	    cout.tie(0);
	 	
	 	int **arr;	//create a pointer to store the address of row pointer array;
	 	int r , c;
	 	cin >> r >> c;

	 	arr = new int*[r];	//create an pointer array storing the address of all column arrays

	 	//create 2-d array
	 	for(int i = 0 ; i < r ; i++){
	 		arr[i] = new int [c];	//pointer array arr having column array;
	 	}

	 	int val = 1;
	 	for(int i = 0 ; i < r ; i++){
	 		for(int j = 0 ; j < c ; j++){
	 			arr[i][j] = val;
	 			val+= 2;
	 			cout << arr[i][j]<<' ';
	 		}
	 		cout << endl;
	 	}

	    
	  return 0 ;

	}