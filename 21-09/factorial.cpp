#include<iostream>
using namespace std;
int fact(int n){
	if(!n) return 1;
	return n * fact(n-1);
}
int factorial(int n){
	// base case
	if(!n) return 1;
	// recursive case
	int ss = factorial(n-1);
	int fs = n * ss;
	// solution
	return fs;
}
int main(){
	for(int i = 0; i <= 10; i++)
		cout<<factorial(i)<<"\t";
	cout<<endl;
	return 0;
}