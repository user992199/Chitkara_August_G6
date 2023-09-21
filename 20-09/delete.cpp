#include<iostream>
using namespace std;
int main(){
	int * p = new int;
	*p = 50;
	int &k = *p;
	delete &k;
	k = 15;
	cout<<*p<<endl;
	cout<<k<<endl;
	// int arr[1000] = {0};
	// delete []arr;
	// int arr[5] = {1, 2, 3, 4, 5};
	// for(int i = 0; i < 1000; i++){
	// 	cout<<arr[i]<<" ";
	// }cout<<endl;
	// int i = 10;
	// delete &i;
	// cout<<i<<endl;
	// int i = 15;
 	return 0;
}