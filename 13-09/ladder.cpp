#include<iostream>
using namespace std;
int main(){
	int arr[4][3] = {
		{1, 2, 3},
		{5, 6, 8}, 
		{7, 8, 10},
		{9, 10, 12}
	};
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);
	int i = 0, j = col-1;
	int key = -7;
	while(i < row and j >= 0){
		if(arr[i][j] == key)
			break;
		if(arr[i][j] > key)
			j--;
		else if(arr[i][j] < key)
			i++;
	}
	if(i == row or j < 0){
		cout<<"Element is not there\n";
	}else{
		cout<<"row: "<<i+1<<endl;
		cout<<"col: "<<j+1<<endl;
	}
	return 0;
}