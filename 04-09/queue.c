#include<stdio.h>
#include<stdbool.h>
#define queue_size 5
typedef struct queue{
	int arr[queue_size];
	int f;
	int b;
	int cap;
	int cs; // current size
}queue;
void init_queue(queue * q){
	q -> f = -1;
	q -> b = -1;
	q -> cap = queue_size;
	q -> cs = 0;
}
void push(queue * q, int data){
	if(q -> cs == q -> cap){
		printf("Queue Overflow\n");
		return;
	}
	if(q -> cs == 0){
		q -> f = 0;
	}
	q -> b = (q -> b + 1) % q -> cap;
	q -> arr[q -> b] = data;
	(q -> cs)++; 
}
void pop(queue * q){
	if(q -> cs == 0) return;
	q -> f = (q -> f + 1) % q -> cap;
	if(q -> cs == 1) q -> b = q -> f = -1;
	q -> cs = q -> cs - 1;
}
int front(queue * q){
	return q -> arr[ q -> f ];
}
bool empty(queue * q){
	return (q -> cs) == 0;
}
int size(queue * q){
	return q -> cs;
}
int main(){
	queue q;
	init_queue(&q);
	for(int i = 0; i < 10; i++){
		push(&q, i+1);
	}
	while(!empty(&q)){
		printf("%d ", front(&q));
		pop(&q);
	}
	printf("\n");
	for(int i = 0; i < 10; i++){
		push(&q, i+1);
	}
	while(!empty(&q)){
		printf("%d ", front(&q));
		pop(&q);
	}
	printf("\n");
	return 0;
}