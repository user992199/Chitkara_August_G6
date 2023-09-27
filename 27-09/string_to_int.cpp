#include<iostream>
#include<cstring>
using namespace std;
int si(string s){
	if(s.size() == 0) return 0;
	int cd = s[s.size() - 1] - '0';
	s.pop_back();
	return si(s) * 10 + cd;
}
int string_to_int(string s, int cur_num = 0, int i = 0){
	if(s[i] == '-'){
		return string_to_int(s, cur_num, i+1)* -1;
	}
	// base case
	if(i == s.size()) return cur_num;
	// recursive case
	cur_num *= 10;
	int cur_digit = s[i] - '0';
	return string_to_int(s, cur_num + cur_digit, i+1);
}
int main(){
	string s = "-32041";
	cout<<string_to_int(s) + 1<<endl;
	cout<<si(s) + 1<<endl;
	return 0;
}