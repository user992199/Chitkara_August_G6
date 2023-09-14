#include<iostream>
using namespace std;
/*
	syntax
return_type identifier(parameters){
	task / definition
}
*/
void print_w(){
	cout<<"World\n";
}
void print_hw(){
	cout<<"Hello ";
	print_w();
}
int main(){
	// syntax
	// identifier(arguments);
	print_hw();
	return 0;
}