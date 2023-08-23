#include<stdio.h>
struct st{
	int i;
	float f;
};
int main(){
	FILE * ptr = fopen("data.txt", "wb+");
	struct st s1 = {10, 3.14};
	// fwrite(&variable, num_of_variable, sizeof(variable), ptr);
	fwrite(&s1, 1, sizeof(s1), ptr);
	struct st s2;
	// fseek(ptr, 0, SEEK_SET);
	rewind(ptr);
	fread(&s2, 1, sizeof(s2), ptr);
	printf("%d, %f\n", s2.i, s2.f);
	remove("data.txt"); // will not work
	rename("data.txt", "struct_data.txt"); // will not work
	fclose(ptr);
	// remove("data.txt");
	// rename("data.txt", "struct_data.txt");
	return 0;
}