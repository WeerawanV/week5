#include<stdio.h>
int main() {
	int x;
	int sum;
	int divisor;
	do {
		printf("Input : ");
		scanf_s("%d", &x);
		sum = 0;
		divisor = 1;
		while (divisor <= x) {
			if (x % divisor == 0) {
				sum++;
			}
			divisor++;
		}
		if (sum == 2 && x != -99) {
			printf("%d is a Prime Number \n", x);
		}
		else {
			printf("%d is not a Prime Number \n", x);
		}
	} while (x != -99);
	return 0;
}
