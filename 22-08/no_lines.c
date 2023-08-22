#include<stdio.h>
int main(){
	FILE*file;
	file=fopen("file.txt","r");
	int c = 1;
	char ch;
	while((ch=fgetc(file)) != EOF){
		if(ch =='\n') c++;
	}
	printf("%d\n", c);
	fclose(file);
	return 0;
}