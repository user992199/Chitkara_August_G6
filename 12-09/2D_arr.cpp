#include<iostream>
using namespace std;
int main(){
	int arr[10][5];
	int n1 = sizeof(arr)/sizeof(arr[0]);
	int n2 = sizeof(arr[0])/sizeof(arr[0][0]);
	cout<<sizeof(arr)<<endl;
	cout<<n1<<" "<<n2<<endl;
	cout<<arr[0][0]<<endl;
	return 0;
}