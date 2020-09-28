#include <stdio.h>

void init_array(int a[][4], int size)
{
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			a[i][j] = (j + 1) + (i * 4);
}

void print_array(int a[][4], int size)
{
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	printf("\n");
}

void rotation_array(int a1[][4], int a2[][4], int size)
{
	int i, j, temp[4][4];

	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			temp[i][j] = a1[3 - j][i];

	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			a2[i][j] = temp[i][j];
}

int main(void)
{
	int arr1[4][4], arr2[4][4];
	int i;

	init_array(arr1, 4);
	print_array(arr1, 4);

	rotation_array(arr1, arr2, 4);
	print_array(arr2, 4);
	
	for (i = 0; i < 3; i++) {
		rotation_array(arr2, arr2, 4);
		print_array(arr2, 4);
	}
}