#include<iostream>
#include<cstring>
using namespace std;
int main(){
	// syntax
	// datatype * ptr = new datatype[number of variables];
	// int * p = new int[10];
	// cout<<sizeof(p)<<endl;
	// for(int i = 0; i < 10; i++){
	// 	cout<<p[i]<<endl;
	// }
	int n = 1999;
	int * arr = new int[n];
	// for(int i = 0; i < n; i++){
	// 	arr[i] = 0;
	// }
	memset(arr, 0, sizeof(arr[0]) * n);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}