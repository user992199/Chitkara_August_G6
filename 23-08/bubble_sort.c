#include<stdio.h>
#include<stdbool.h>
void bubble_sort(int arr[], int n, bool(*cmp)(int, int)){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(cmp(arr[j], arr[j+1])){
				arr[j] = arr[j] + arr[j+1] - (arr[j+1] = arr[j]);
			}
		}
	}
}
static inline bool inc(int a, int b){
	return a > b;
}
static inline bool dec(int a, int b){
	return a < b;
}
int main(){
	int arr[] = {5, 2, 1, 3, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, n, &dec);
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}printf("\n");
	return 0;
}