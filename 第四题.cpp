#include<stdio.h>
int main (){
	int c,d,f;
	int num[6];
	int max = 0;
	int j;
	for (int a = 100 ; a <= 999; a++){
		for(int b = 100; b <= 999; b++){
			c = a * b;
			f = c;
			for(int i = 5; i >=0; i--){
				d = c % 10;
				c = c / 10;
				num[i] = d;
			}
			for( j = 5; j >= 0; j--){
				if(num[j] == num[5 - j]) continue;
				else break;
			}
			
			if(j == -1){
				if(f > max){
					max = f;
				}
			}
		}
	}
	printf("%d", max);
	return 0;
}
 
