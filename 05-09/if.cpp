#include<iostream>
using namespace std;
int main(){
	if(not(10 > 0 and 5 > 0)){
		cout<<10<<endl;
	}else{
		cout<<"else\n";
	}
	int i = 10;
	for(;;){
		cout<<i<<endl;
		if(i--) {break;}
	}
	while(){
		cout<<"in\n";
		break;
	}
	return 0;
}