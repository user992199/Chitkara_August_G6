#include<iostream>
using namespace std;
// int add(int arr[10], int n){
// int add(int arr[], int n){
int add(int * arr, int n){
	int ans = 0;
	for(int i = 0; i < n; i++){
		// ans += arr[i];
		ans += *(arr + i);
	}
	return ans;
}
int main(){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	// cin>>n;
	// for(int i = 0; i < n; i++){
	// 	cin>>arr[i];
	// }
	cout<<add(arr, n)<<endl;
	return 0;
}