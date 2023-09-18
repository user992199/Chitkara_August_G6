#include<iostream>
using namespace std;
int main(){
	int * p;
	{
		p = new int;
	}
	*p = 10;
	p = new int;
	cout<<*p<<endl;
	return 0;
}