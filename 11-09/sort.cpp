#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[10] = {1, 4, 6, 8, 5, 2, 1, 456, 7, -10};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}