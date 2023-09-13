#include<iostream>
using namespace std;
int main(){
	int i = 10;
	int * p = &i;
	int * * p2 = &p;
	cout<<p2<<endl; 
	cout<<*p2<<endl; 
	cout<<**p2<<endl; 
	return 0;
}