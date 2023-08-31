#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#define stack_size 100
typedef struct stack{
	char arr[stack_size];
	int top;
	int cap;
}stack;
void init_stack(stack *s){
	s -> top = -1;
	s -> cap = stack_size;
}
void push(stack *s, char data){
	if(s -> top >= s -> cap - 1){
		printf("Stack Overflow\n");
		return;
	}
	s -> top = s -> top + 1;
	s -> arr[s -> top] = data;
}
void pop(stack *s){
	if(s -> top <= -1){
		printf("Stack Underflow\n");
		return;
	}
	s -> top = s -> top - 1;
}
char top(stack *s){
	if(s -> top <= -1) return -1;
	return s -> arr[s -> top];
}
bool empty(stack *s){
	return s -> top == -1;
}
int size(stack *s){
	return s -> top + 1;
}
bool is_alpnum(char ch){
	if(ch <= '9' && ch >= '0') return true;
	if(ch <= 'z' && ch >= 'a') return true;
	if(ch <= 'Z' && ch >= 'A') return true;
	return false;
}
int priority(char ch){
	switch(ch){
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	case '^':
		return 3;
	}
	return -1;
}
int post(char arr[]){
	stack s;
	init_stack(&s);
	int n1, n2;
	for(int i = 0; arr[i]; i++){
		if(arr[i] == ' ' || arr[i] == '\t') continue;
		if(arr[i] >= '0' && arr[i] <= '9'){
			push(&s, arr[i] - '0');
			continue;
		}
		n1 = top(&s); pop(&s);
		n2 = top(&s); pop(&s);
		switch(arr[i]){
		case '+':
			push(&s, n2 + n1);
			break;
		case '-':
			push(&s, n2 - n1);
			break;
		case '*':
			push(&s, n2 * n1);
			break;
		case '/':
			push(&s, n2 / n1);
			break;
		case '^':
			push(&s, pow(n2, n1));
			break;
		}
	}
	return top(&s);
}
int main(){
	char arr[] = "2 3 4 * 5 6 - / +"; // abc*de-/+
	printf("%d\n",post(arr));
	return 0;
}