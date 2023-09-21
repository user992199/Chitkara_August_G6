#include<iostream>
using namespace std;
void update(int & x){
	x = 100;
}
int main(){
	int i = 15;
	{
		int & j = i;
	}
	cout<<j<<endl;
	return 0;
}