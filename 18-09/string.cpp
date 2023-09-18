#include<iostream>
#include<cstring>
using namespace std;
int main(){
	// string s;
	// s = "Hello World";
	// string k = "Bye bye";
	// cout<<s<<endl;
	// cout<<s.length()<<endl;
	// cout<<s + k<<endl;
	// cout<<s<<endl;
	// s += k;
	// cout<<s<<endl;
	string s;
	//   012345678910
	s = "Hello World";
	cout<<s.substr(5, 0)<<endl;
	s += s.substr(5);
	cout<<s<<endl;
	cout<<s[8]<<endl;
	return 0;
}