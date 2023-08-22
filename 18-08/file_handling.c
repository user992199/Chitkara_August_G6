#include<stdio.h>
int main(){
	FILE * ptr = fopen("file.txt", "r");
	if(ptr == 0){
		printf("file does not exist\n");
	}else{
		printf("File opened.\n");
	}
	fclose(ptr);
	return 0;
}