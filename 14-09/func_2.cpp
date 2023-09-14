#include<iostream>
using namespace std;
int add(int a, int b){
	// int c = a + b;
	// return c;
	return a + b;
	cout<<"function called\n";
}
void print_ans(int a){
	cout<<a<<endl;
	return;
}
int main(){
	// cout<<add(1, 2)<<endl;
	print_ans(add(1, 2));
	return 0;
}