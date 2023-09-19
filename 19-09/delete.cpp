#include<iostream>
using namespace std;
int sum(int n){
	int * arr = new int[n];
	for(int i = 0; i < n; i++){
		arr[i] = i+1;
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	// syntax
	// delete []pointer_identifier;
	delete []arr; 
	// always deallocate the dynamically allocated memory
	// if no longer in use to avoid memory leak
	return sum;
}
int main(){
	cout<<sum(10)<<endl;
	cout<<sum(20)<<endl;
	return 0;
}