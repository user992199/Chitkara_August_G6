#include<iostream>
using namespace std;
int main(){
	int *p; // wild pointers 
	p = NULL; // NULL pointers 
	cout<<p<<endl;
	p = new int;
	cout<<p<<endl;
	*p = 16;
	delete p;
	cout<<*p<<endl; // dangling pointers
	p = 0; // NULL pointer
	return 0;
}