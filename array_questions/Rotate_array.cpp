#include<bits/stdc++.h>
	using namespace std;

	void Rotate_array(int a[1000][1000] , int n ,int m){
			for(int row = 0 ; row < n ; row++){
			int startcol = 0;
			int endcol = n-1;
			while(startcol < endcol){
				swap(a[row][startcol],a[row][endcol]);
				startcol++;
				endcol--;
			}
		}

		// for transpose
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				if(i < j){
					swap(a[i][j],a[j][i]);
			}
		}
	}
}

void display(int a[1000][1000] , int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cout << a[i][j] << " "; 
		}
		cout << endl;
	}
}	
	int main(){

	    ios::sync_with_stdio(false);
	    cin.tie(0);
	    cout.tie(0);
	 
	int n,m;
	cin >> n >> m;
	int a[1000][1000];
	for (int i = 0; i < n; ++i){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	Rotate_array(a , n , m);
	display(a , n);



	  return 0 ;

	}