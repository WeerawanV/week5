#include<stdio.h>

int main() {
	float x; // round per sec
	float sum;
	float round = 1;
	int time = 0;
	printf("n = ");
	scanf_s("%f", &x);
	x *= 3;
	round += x;
	x /= 3;
	while (x > 0.5) {
		x *= 0.8;
		time++;
		sum = x;
		if (sum > 0.5) {
			sum *= 3;
			round += sum;
		}
		sum == 0;	
	}
	printf("Duration time = %d seconds \n", time *= 3);
	printf("Whirling about = %.0f rounds",round);
	return 0;
}