#include<bits/stdc++.h>
	using namespace std;
	
	int length(char input[]){
		int cnt = 0;
		int i = 0;
		while(input[i] != '\0'){
			cnt++;
			i++;
		}
		return cnt;
	}

	int main(){

	    ios::sync_with_stdio(false);
	    cin.tie(0);
	    cout.tie(0);
	

	char a[100];
	cin >> a;
	cout <<"length of String: " << length(a);
	   
	  return 0 ;

	}