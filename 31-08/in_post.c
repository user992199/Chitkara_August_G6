#include<stdio.h>
#include<string.h>
#include<stdbool.h>
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
void post(char arr[]){
	// initialize
	int n = strlen(arr);
	char ans[100] = "";
	stack s;
	init_stack(&s);
	int j = 0;
	// expression evaluation loop
	for(int i = 0; i < n; i++){
		// if we have an operand => push in stack
		if(is_alpnum(arr[i])){
			ans[j++] = arr[i];
			continue;
		}
		// if we have white spaces => ignore
		if(arr[i] == ' ' || arr[i] == '\t'){
			continue;
		}
		// if we have open bracket => push in stack over any operator
		if(arr[i] == '('){
			push(&s, arr[i]);
		}
		// if we have close bracket
		else if(arr[i] == ')'){
			// jab tak open bracket na mill jaye
			// tabh tak pop karte raho
			while(top(&s) != '('){
				ans[j++] = top(&s);
				pop(&s);
			}
			// open bracket ko bhi pop kardo
			pop(&s);
		}
		// agar koi bhi operator mill gya
		switch(arr[i]){
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
			// agar stack khali hai => push
			if(empty(&s)){
				push(&s, arr[i]);
				continue;
			}
			// check priority of the operator at top
			// and pop it, if it has, greater or equal priority
			// as the current operator
			while(!empty(&s) && priority(top(&s)) >= priority(arr[i])){
				ans[j++] = top(&s);
				pop(&s);
			}
			// after remove the operator from stack
			// push the current operator
			push(&s, arr[i]);
		}	
	}
	// remove all the operators from stack
	while(!empty(&s)){
		ans[j++] = top(&s);
		pop(&s);
	}
	printf("%s\n", ans);
}
int main(){
	char arr[] = "a+b*c/(d-e)"; // abc*de-/+
	// char arr[] = "a+b";
	post(arr);
	return 0;
}