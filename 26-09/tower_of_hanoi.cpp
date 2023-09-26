#include<iostream>
using namespace std;
void toh_compact(int n, char s, char t, char h){
	if(!n) return;
	toh_compact(n-1, s, t, h);
	cout<<"Move Disk "<<n<<" from "<<s<<" to "<<t<<endl;
	toh_compact(n-1, h, s, t);
}
void toh(int n, char s, char h, char t, int &step_num){
	// base case
	if(n == 0) return;
	// recursive case
	//       A, C, B
	toh(n-1, s, t, h, step_num);
	cout<<"#"<<++step_num<<": "
		<<"Move Disk "<<n<<" from Tower "
		<<s<<" to Tower "<<t<<endl;
	//       B, A, C
	toh(n-1, h, s, t, step_num);
}
int main(){
	char t1 = 'A', t2 = 'B', t3 = 'C';
	int n = 4;
	int steps = 0;
	toh(n, t1, t2, t3, steps);
	toh_compact(n, t1, t2, t3);
	return 0;
}