#include<stdio.h>
#include<stdarg.h>
int add(int n, ...){
	int ans = 0;
	va_list ptr; // to create a pointer
	va_start(ptr, n); // to start/initialize the list of arguments
	for(int i = 0; i < n; i++){
		ans += va_arg(ptr, int); // to access each argument
	}
	va_end(ptr); // to close/terminate the list of arguments
	return ans;
}
int main(){
	printf("%d\n", add(6, 1, 2, 3, 4, 5, 6));
	printf("%d\n", add(3, 2, 4, 6));
	return 0;
}