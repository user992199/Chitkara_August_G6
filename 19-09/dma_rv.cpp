#include<iostream>
using namespace std;
void update(int x){
	x = 100;
}
int main(){
	int * p = new int;
	int &i = *p;
	i = 10;
	cout<<i<<endl;
	update(i);
	cout<<i<<endl;
	return 0;
}