#include<bits/stdc++.h>
	using namespace std;
	
	

	int main(){

		

	    ios::sync_with_stdio(false);
	    cin.tie(0);
	    cout.tie(0);
	 	
	 	int n;  cin >> n;
	 	int a[n];
	 	for(auto i = 0 ; i < n ; i++){
	 		cin >> a[i];
	 	}
	 	int key ; cin >> key;

	 	//binary search STL
	 	bool search = binary_search(a , a+n , key);
	 	if(search){
	 		cout << "present ";
	 	}else{
	 		cout << "absent! ";
	 	}
	 	
	 	//lower bound of an element in an array:
	 	auto lb = lower_bound(a , a+n , key);
	 	cout << endl << "Lower bound is :" << (lb-a)<< endl;

	 	//upper bound of an element in an array:
		auto ub = upper_bound(a , a+n , key);
	 	cout << "Upper bound is :" << (ub-a) << endl;

	 	//Frequency of occurence of a number in an array:
	 	cout << "Occ Frequency of number is :"<< ub-lb << endl;
	    
	  return 0 ;

	}