#include<iostream>
using namespace std;
void merge_2_sorted_arr(int a1[], int m, int a2[], int n){
	int * a3 = new int[m+n];
	int i = 0, j = 0, k = 0;
	while(i < m and j < n){
		if(a1[i] < a2[j])
			a3[k++] = a1[i++];
		else
			a3[k++] = a2[j++];
	}
	while(i < m)
		a3[k++] = a1[i++];
	while(j < n)
		a3[k++] = a2[j++];
	for(int i = 0; i < m+n; i++){
		a1[i] = a3[i];
	}
}
int main(){
	int a1[10] = {1, 3, 5, 7};
	int a2[] = {2, 4, 6, 8, 10, 12};
	int m = 4;
	int n = sizeof(a2)/sizeof(a2[0]);
	merge_2_sorted_arr(a1, m, a2, n);
	for(int i = 0; i < m + n; i++){
		cout<<a1[i]<<" ";
	}
	cout<<endl;
	return 0;
}