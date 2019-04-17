#include<stdio.h>
int main(){
	int n,i;
	for( n = 1; n < 1000000000;n++){
		for( i = 1; i <= 20; i++){
			if (n % i == 0)continue;
			else break;
		}
		if(i == 21){
			printf("%d\n", n);
		}
	}
}
