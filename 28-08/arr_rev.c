#include<stdio.h>
#include<stdbool.h>
typedef struct stack{
	int arr[50];
	int cap;
	int top;
}stack;
void init_stack(stack *st){
	st->top = -1;
	st->cap = 50;
}
void push(stack *st, int data){
	if(st->top >= st->cap - 1){
		printf("Stack Overflow\n");
		return;
	}
	st -> top = st -> top + 1;
	st->arr[st->top] = data;
}
void pop(stack *st){
	if(st->top <= -1){
		printf("Stack Underflow\n");
		return;
	}
	st->top--;
}
int top(stack *st){
	if(st->top == -1) return -1;
	return st->arr[st->top];
}
int size(stack *st){
	return st->top + 1;
}
bool empty(stack *st){
	return st->top <= -1;
}
void reverse_arr(int arr[], int n){
	stack s1;
	init_stack(&s1);
	for(int i = 0; i < n; i++){
		push(&s1, arr[i]);
	}
	for(int i = 0; i < n; i++){
		arr[i] = top(&s1);
		pop(&s1);
	}
}
int main(){
	int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	reverse_arr(arr, n);
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\n");
	return 0;
}