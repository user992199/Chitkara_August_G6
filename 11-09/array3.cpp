#include<iostream>
using namespace std;
int main(){
	int arr[10] = {};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i <= n+5; i++)
		cout<<arr[i]<<" ";
	cout<<endl;

	return 0;
}