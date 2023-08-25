#include<stdio.h>
int main(){
	// // case 1
	// int b = 5;
	// int a = 10;
	// int * p = &a;

	// // case 2
	// int b = 5;
	// int a = 10;
	// int * p = &a;

	// // case 3
	// int b = 5;
	// int a = 10;
	// const int * p = &a;

	// // case 4
	// int b = 5;
	// int a = 10;
	// int * const p = &a;

	// // case 5
	// int b = 5;
	// const int a = 10;
	// const int * p = &a;

	// // case 6
	// int b = 5;
	// const int a = 10;
	// int * const p = &a;

	// // case 7
	// int b = 5;
	// int a = 10;
	// const int * const p = &a;

	// case 8
	int b = 5;
	const int a = 10;
	const int * const p = &a;

	a = b;
	p = &b;
	*p = b;

	printf("%d\n", a);

	return 0;
}