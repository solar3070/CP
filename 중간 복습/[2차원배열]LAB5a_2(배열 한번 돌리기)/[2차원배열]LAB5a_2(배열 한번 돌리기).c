#include <stdio.h>

void initArray(int arr[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			arr[i][j] = (i * 4) + (j + 1);
}

void printArray(int arr[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

void rotateArray(int arr1[][4], int arr2[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) 
		for (j = 0; j < 4; j++)
			arr2[i][j] = arr1[3 - j][i];
}

int main(void)
{
	int arr1[4][4], arr2[4][4];

	initArray(arr1, 4);
	printArray(arr1, 4);
	rotateArray(arr1, arr2, 4);
	printArray(arr2, 4);
}