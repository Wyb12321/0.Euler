#include <stdio.h>

int main() {
	long long int a;
	int ans;
	scanf("%lld", &a);
	for (int i = 2; i * i <= a; i++) {
		while(a % i == 0) {
			a /= i;
			ans = i;
			
		}
	}
	if (a != 1) ans = a;
	printf("%d\n", ans);
	return 0;
}
