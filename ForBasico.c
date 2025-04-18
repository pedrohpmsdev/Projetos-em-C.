#include <stdio.h>
int main (){
	int c;
	int prd = 0;
	for (c = 1; c <=10; c++){
		prd = c * 5;
		printf ("5 X %d = %d.\n", c, prd);	
	}
	return 0;
}
