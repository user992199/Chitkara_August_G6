#include<stdio.h>
typedef struct student{
	int arr[5];
}stu;
void func(stu s1){
	for(int i = 0; i < 5; i++){
		s1.arr[i] = 0;
	}
	printf("%d\n", s1.arr[0]);
}
int main(){
	stu s1;
	for(int i = 0; i < 5; i++){
		s1.arr[i] = i+1;
	}
	func(s1);
	printf("%d\n", s1.arr[0]);
	return 0;
}