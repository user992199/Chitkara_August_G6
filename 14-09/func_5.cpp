#include<iostream>
using namespace std;
// syntax
// return_type identifier(parameters);
void print_hw();
void print_w();
int main(){
	print_hw();
	return 0;
}
void print_hw(){
	cout<<"Hello ";
	print_w();
}
void print_w(){
	cout<<"World\n";
}