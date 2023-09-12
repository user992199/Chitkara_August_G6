#include<iostream>
using namespace std;
int main(){
	// int a1[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	// int a1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	// int a1[][3] = {{1, 2}, 3, 4, 5, 6, 7, 8, 9};
	// int a1[][3] = {{1, 2}, 3, 4, 5, 6, {7, 8, 9}};
	// int a1[][3] = {1, 2, 3, {7, 8, 9}};
	// int a1[][3] = {1, 2, 0, {3}, {7, 8, 9}};
	int a1[][3] = {{1, 2}, 3, 4, 5, 6, 7, 8, {9, 10}};
	int n1 = sizeof(a1)/sizeof(a1[0]);
	int n2 = sizeof(a1[0])/sizeof(a1[0][0]);
	for(int i = 0; i < n1; i++){
		for(int j = 0; j < n2; j++){
			cout<<a1[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}