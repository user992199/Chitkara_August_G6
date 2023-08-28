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
int main(){
	stack s1;
	s1.top = -1;s1.cap = 50;
	init_stack(&s1);
	for(int i = 0; i < 5; i++){
		push(&s1, i+1);
	}
	while(!empty(&s1)){
		printf("%d ", top(&s1));
		pop(&s1);
	}
	printf("\n");
	return 0;
}