#include<stdio.h>



union un1{
	int i;
	float f;
	char ch;
};
void print_union(union un1 u1){printf("%d\n%f\n%c\n\n", u1.i, u1.f, u1.ch);}
int main(){
	union un1 u1; 	print_union(u1);
	u1.i = 10;		print_union(u1);
	u1.f = 5.6;		print_union(u1);
	u1.ch = 't';	print_union(u1);
	return 0;
}