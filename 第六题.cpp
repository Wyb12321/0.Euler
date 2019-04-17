#include<stdio.h>
int main (){
	int a = 0;
	int i,b;
	for (i = 1; i <= 100; i++ ){
		a = a + i * i;
	}
	b =5050 * 5050 -a;
	printf("%d",b); 
} 
