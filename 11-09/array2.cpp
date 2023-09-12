#include<iostream>
using namespace std;
int main(){
	int arr[] = {};
	// char str[10] = "";
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"sizeof: "<<sizeof(arr)<<endl;
	for(int i = 0; i < n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}