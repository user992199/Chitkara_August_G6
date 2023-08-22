#include<stdio.h>
int main(){
	FILE*og_file=fopen("file.txt","r");
	FILE*cpy_file=fopen("copy_of_file.txt","w");
	char ch;
	while((ch=fgetc(og_file)) != EOF){
		fputc(ch, cpy_file);
	}
	fclose(og_file);
	fclose(cpy_file);
	return 0;
}