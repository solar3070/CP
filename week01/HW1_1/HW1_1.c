#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[100];
	int count[10] = {0};
	int num, i, j;

	srand(time(NULL));

	printf("Enter the number of random numbers:(<=100): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		data[i] = rand() % 10;

	for (i = 0; i < 10; i++)
		for (j = 0; j < num; j++)
			if (data[j] == i)
				count[i]++;
		
	for (i = 0; i < 10; i++)
		printf("%d�� ������ %d\n", i, count[i]);

	printf("--------------------------------------------\n");
	printf("�߻��� ������");

	for (i = 0; i < num; i++) {
		if (i % 5 == 0)
			printf("\n");
		printf("%5d", data[i]);
	}
	printf("\n");

	return 0;
}