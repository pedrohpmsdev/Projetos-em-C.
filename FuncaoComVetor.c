#include <stdio.h>
#include <string.h>
#include <locale.h>

void test1 (int q[5]){
	int i;
	for (i = 0; i < 5; i++){
		printf ("%d ", q[i]);
	}
}
int main (){
	int g [5] = {5, 4, 3, 2, 1};	
	test1 (g);
}
