#include<stdio.h>
#include<stdbool.h>
typedef struct stack{
	char #include<stdio.h>
#include<stdbool.h>
typedef struct stack{
	char arr[50];
	int top;
	int cap;
}stack;
void init_stack(stack *s){
	s -> top = -1;
	s -> cap = 50;
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
	if(s -> top <= -1) return 0;
	return s -> arr[s -> top];
}
bool empty(stack *s){
	return s -> top == -1;
}
int size(stack *s){
	return s -> top + 1;
}
bool balanced(char arr[]){
	stack s;
	init_stack(&s);
	for(int i = 0; arr[i]; i++){
		switch(arr[i]){
		case '(':
		case '{':
		case '[':
			push(&s, arr[i]);
			break;
		case '}':
			if(top(&s) == '{') pop(&s);
			else return false;
			break;
		case ']':
			if(top(&s) == '[') pop(&s);
			else return false;
			break;
		case ')':
			if(top(&s) == '(') pop(&s);
			else return false;
			break;
		}
	}
	return empty(&s);
}
int main(){
	char arr[] = "( { [ ] }";
	if(balanced(arr)) printf("yes\n");
	else printf("no\n");
	return 0;
}arr[50];
	int top;
	int cap;
}stack;
void init_stack(stack *s){
	s -> top = -1;
	s -> cap = 50;
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
bool balanced(char arr[]){
	stack s;
	init_stack(&s);
	for(int i = 0; arr[i]; i++){
		switch(arr[i]){
		case '{':
		case '(':
		case '[':
			push(&s, arr[i]); 
			break;
		case ')':
			if(top(&s) == '(') pop(&s);
			else return false;
			break;
		case '}':
			if(top(&s) == '{') pop(&s);
			else return false;
			break;
		case ']':
			if(top(&s) == '[') pop(&s);
			else return false;
			break;
		}
	}
	return true;
}
int main(){
	char arr[] = "(a + b * { c - e } / [ i + j ] )";
	if(balanced(arr)){
		printf("yes\n");
	}else{
		printf("no\n");
	}	return 0;
}