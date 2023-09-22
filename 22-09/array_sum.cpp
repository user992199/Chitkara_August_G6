#include<iostream>
using namespace std;
int sum1(int * arr, int n, int i = 0){
	// base case
	if(i == n) return 0;
	// recursive case
	int ss = sum1(arr, n, i+1);
	// return ans
	cout<<arr[i]<<" ";
	return arr[i] + ss;
}
int sum2(int * arr, int n){
	// base case
	if(!n) return 0;
	// recursive case
	int ss = sum2(arr, n-1);
	// return ans
	cout<<arr[n-1]<<" ";
	return arr[n-1] + ss;
}
int sum3(int * arr, int n){
	// base case
	if(!n) return 0;
	// recursive case
	int ss = sum3(arr+1, n-1);
	// return ans
	cout<<arr[0]<<" ";
	return arr[0] + ss;
}
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<sum1(arr, n)<<endl;
	cout<<sum2(arr, n)<<endl;
	cout<<sum3(arr, n)<<endl;
	return 0;
}