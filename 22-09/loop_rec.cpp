#include<iostream>
using namespace std;
void for_rec(int n, int i = 0){
	// base case
	if(i == n) return;
	// recursive case
	cout<<i<<" ";
	for_rec(n, i+1);
}
int main(){
	for_rec(19);
	return 0;
}