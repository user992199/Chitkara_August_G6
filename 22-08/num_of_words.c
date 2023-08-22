#include<stdio.h>
int main(){
	int count = 0;
	char ch;
	FILE * ptr = fopen("file.txt", "r");
	if(ptr == 0) return 0;
	while(!(feof(ptr))){ // ((ch = fgetc(ptr)) != EOF)
		ch = fgetc(ptr);
		if(ch == ' ' || ch == '\n')
			count++;
	}
	fclose(ptr);
	count++;
	printf("%d\n", count);
	return 0;
}