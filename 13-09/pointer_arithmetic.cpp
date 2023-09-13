#include<iostream>
using namespace std;
int main(){
	int i = 10, j = 13;
	int *p1 = &i, *p2 = &j;
	// cout<<p1 + p2<<endl;
	cout<<p1<<" "<<p2<<endl;
	cout<<p1 - p2<<endl;
	cout<<p1 + 1<<endl;
	cout<<p1 - 1<<endl;
	return 0;
}