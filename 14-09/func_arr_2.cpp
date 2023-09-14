#include<iostream>
using namespace std;
// int add(int arr[2][2], int m, int n){
// int add(int arr[][3], int m, int n){
// int add(int arr[][2], int m, int n){
int add(int (*arr)[2], int m, int n){
	int ans = 0;
	for(int i = 0; i < m; i++){
		for(int j= 0; j < n; j++){
			ans += arr[i][j];
			// ans += *(*(arr + i) + j);
		}
	}
	return ans;
}
int main(){
	int arr[2][2] = {{1,2},{3,4}};
	int m = sizeof(arr)/sizeof(arr[0]);
	int n = sizeof(arr[0])/sizeof(arr[0][0]);
	cout<<add(arr, m, n)<<endl;
	return 0;
}