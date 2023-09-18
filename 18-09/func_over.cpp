#include<iostream>
using namespace std;
void print_ans(int ans){
	cout<<ans<<endl;
}
int print_ans(int ans, int n){
	for(int i = 0; i < n; i++)
		cout<<ans<<" ";
	cout<<endl;
	return ans;
}
void print_ans(float ans){
	cout<<"float: "<<ans<<endl;
}
int main(){
	print_ans(10);
	print_ans(5, 5);
	// float f = 3.14;
	// print_ans(f);
	print_ans((float)3.14);
	return 0;
}