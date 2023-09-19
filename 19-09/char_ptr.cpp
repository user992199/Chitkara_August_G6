#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char * p = new char;
	*p = 'k';
	*(p+1) = 'j';
	*(p+2) = 'd';
	cout<<p<<endl;
	char arr[] = "Hello \nWorld Bye \t Bye \nnow\nExtra C\0Haracters and some words";
	char a2[] = "Hello\0World";
	cout<<strlen(a2)<<" "<<sizeof(a2)<<endl;
	cout<<strlen(arr)<<" "<<sizeof(arr)<<endl;
	cout<<"a2: "<<a2<<endl;
	for(int i = 0; i < sizeof(a2); i++){
		cout<<a2[i];
	}
	cout<<endl;
	cout<<arr<<endl;
	cout<<(int *)a2<<endl;
	int * p2 = (int*)a2;
	cout<<*p2<<endl;
	int k = 65;
	char * p3 = (char*)(&k);
	cout<<p3<<endl;
	return 0;
}