#include<iostream>
using namespace std;
int main(){
	int a = 10;
	char ch = 'h';
	float f = 3.14;
	cout<<"hello world"<<endl;
	cout<<a<<" "<<ch<<' '<<f<<endl;
	cout<<"Enter a number: ";
	goto after_cin;
	cin>>a>>ch>>f;
	after_cin:
	cout<<a<<" "<<ch<<' '<<f<<endl;
	return 0;
}