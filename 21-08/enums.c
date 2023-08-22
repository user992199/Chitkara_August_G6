#include<stdio.h>


enum en {Moon, Tyr = 13, Odin, Thor, Freya, Saturn = 3000000000, Sun};
enum em {Mon=3, Tues = 13, Wed, Thurs, Fri, Sat = 3000000000};
int main(){
	enum en day = Moon;
	enum em d2 = Mon;
	printf("%d\n", day);
	// enum en cd = day + 2;
	printf("%d\n", d2);
	return 0;
}