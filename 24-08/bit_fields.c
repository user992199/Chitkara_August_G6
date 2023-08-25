#include<stdio.h>
struct st{
	int i : 10;
	int : 0;
	int h : 22;	
	int k : 10;
};
int main(){
	struct st s1;
	printf("%d\n", sizeof(s1));
	s1.i = 1000;
	printf("%d\n", s1.i);
	return 0;
}