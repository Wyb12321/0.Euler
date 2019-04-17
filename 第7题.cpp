#include<stdio.h>
int main(){
	int n,i,j;
	int a[11000];
	j = 2;
	a[1] = 2;
	for(n = 3; n < 10000000; n++){
		for(i = 2; i < n; i++ ){
			if(n % i == 0) 			 
			 break;
		}
		if(i == n){			
			a[j] = n;
			j++;
		}
		if(j > 10003){
			break;
		}				
	}
	printf("%d", a[10001]);
	return 0; 
} 
