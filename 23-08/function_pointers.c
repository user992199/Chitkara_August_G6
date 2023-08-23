#include<stdio.h>
int add(int a, int b){
	return a + b;
}
int sub(int a, int b){
	return a - b;
}
void print_ans(int a, int b, int (*ptr)(int, int)){
	printf("%d\n", ptr(a, b));
}
int main(){
	int (*func_ptr) (int, int);
	func_ptr = &sub;
	int a = 10, b = 13;
	print_ans(a, b, &add);
	// printf("%d\n", func_ptr(a, b));
	// printf("%d\n", func_ptr);
	// printf("%d\n", sizeof(func_ptr));
	return 0;
}