#include<iostream>
using namespace std;
int j = 1;
int main(){
	int j = 2;
	{
		int j = 3;
		{
			int j = 4;
			{
				cout<<::j<<endl;
			}
		}
	}
	// cout<<j<<endl;
	return 0;
}