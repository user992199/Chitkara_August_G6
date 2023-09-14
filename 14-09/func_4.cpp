#include<iostream>
using namespace std;
void print_ans(int a, int b = 0, int c = 0, int d = 0){
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	cout<<a + b + c + d<<endl;
}
int main(){
	print_ans(4);
	print_ans(4, 8);
	print_ans(4, 8, 6);
	print_ans(4, 8, 6, 10);
	// print_ans(4, 8, 6, 10, 12);
	return 0;
}