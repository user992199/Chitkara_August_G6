#include<iostream>
using namespace std;
int main(){
	int i = 10;
	int *p1[10]; // array of pointers
	int (*p2)[10]; // pointer to an array
	cout<<sizeof(p1)<<endl;
	cout<<sizeof(p2)<<endl;
	int arr[10];
	cout<<arr<<endl; // points to an integer
	int arr_2[10][10];
	p2 = arr_2;
	cout<<arr_2<<endl; // points to an array of size 10 // int [10]
	return 0;
}