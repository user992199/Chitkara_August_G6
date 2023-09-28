#include<iostream>
using namespace std;
void print_ss(char inp[], char out[], int i = 0, int j = 0){
	// base case
	if(inp[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	// recursive case
	print_ss(inp, out, i+1, j);
	out[j] = inp[i];
	print_ss(inp, out, i+1, j+1);
}
int main(){
	char inp[] = "abc";
	char out[100] = "";
	print_ss(inp, out);
	return 0;
}