#include<stdio.h>
#pragma pack(1)
struct st{
	char ch;
	double d;
};
int main(){
	struct st s1;
	printf("%d\n", sizeof(s1));
	return 0;
}