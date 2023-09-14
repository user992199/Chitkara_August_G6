#include<iostream>
using namespace std;
int add(int, int);
int add_2(int a, int b);
int main(){
	cout<<add(4, 1)<<endl;
	cout<<add_2(4, 1)<<endl;
	return 0;
}
int add(int a, int b){
	return a + b;
}
int add_2(int a, int b){
	return a + b;
}