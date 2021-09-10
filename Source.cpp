#include<stdio.h>
int main() {
	int x;
	int divisor;
	do {
		printf("Input : ");
		scanf_s("%d", &x);
		divisor = 2;
		while (x % divisor != 0) {
			divisor++;
		}
		if (divisor == x) {
			printf("%d is a Prime Number \n", x);
		}
		else {
			printf("%d is not a Prime Number \n", x);
		}
	} while (x != -99);
	return 0;
}