#include<stdio.h>
int abs(int x) {
	if (x >= 0) {
		x = x;
	}
	else {
		x = -x;
	}
	return x;
}
int main() {
	int N;
	printf("Enter Number :  ");
	scanf_s("%d", &N);
	for (int i = N - 1; i >= -(N - 1); i--)
	{
		for (int j = -(N - 1); j <= N - i; j++)
		{
			if ((abs(j) + abs(i)) <= N - 1)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}