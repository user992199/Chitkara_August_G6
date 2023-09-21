#include<iostream>
using namespace std;
void pn(int n){
	// base case
	if(!n) return;
	// recursive case
	pn(n-1);
	// final ans
	cout<<n<<" ";
}
void pn_rev(int n){
	if(!n) return;
	cout<<n<<" ";
	pn_rev(n-1);
}
int main(){
	pn(19);
	cout<<endl;
	pn_rev(19);
	cout<<endl;
	return 0;
}