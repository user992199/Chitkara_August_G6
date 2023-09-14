#include<iostream>
using namespace std;
int add(int (*arr)[10], int n){
	int ans = 0;
	cout<<sizeof(arr)<<endl;
	for(int i = 0; i < n; i++){
		ans += (*arr)[i];
	}
	return ans;
}
int main(){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<add(&arr, n)<<endl;
	return 0;
}