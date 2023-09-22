#include<iostream>
using namespace std;
int bin_rec(int arr[], int s, int e, int key){
	// base case
	if(s > e) return -1;
	// recursive case
	int m = s + (e-s)/2;
	if(arr[m] == key) return m;
	if(arr[m] > key) return bin_rec(arr, s, m-1, key);
	return bin_rec(arr, m+1, e, key); 
}
int bin(int arr[], int n, int key){
	int s = 0, e = n-1, m;
	while(s <= e){
		m = s + (e-s)/2;
		if(arr[m] == key){
			return m;
		}
		if(arr[m] > key){
			e = m-1;
		}else{
			s = m+1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {-1, 2, 3, 4, 6, 7, 8, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 6;
	cout<<bin_rec(arr, 0, n-1, key)<<endl;
	cout<<bin(arr, n, key)<<endl;
	return 0;
}