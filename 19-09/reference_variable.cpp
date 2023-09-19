#include<iostream>
using namespace std;
// void update(const int &x){
void update(int &x){
	x = 100;
}
int main(){
	int i = 10;
	i--;
	int &j = i;
	j = 10;
	j = 123;
	update(i);
	// update(10);
	cout<<i<<endl;
	return 0;
}