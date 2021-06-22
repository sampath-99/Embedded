/* C program to multiply two square matrices.*/
#include <stdio.h>
#define N 4


void multiply(int mat1[][N], int mat2[][N], int res[][N])
{
	int i, j, k;
	for (i = 0; i < N; i++) 
	{
	for (j = 0; j < N; j++) 
	{
	res[i][j] = 0;
	for (k = 0; k < N; k++)
		res[i][j] += mat1[i][k] * mat2[k][j];
	}
	}
}

int main()
{
	int mat1[N][N] = { 		{ 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 },
					{ 4, 4, 4, 4 } };

	int mat2[N][N] = { 		{ 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 },
					{ 4, 4, 4, 4 } };

	int res[N][N]; // To store result
	int i, j;
	multiply(mat1, mat2, res);

	printf("Result matrix is \n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%d ", res[i][j]);
		printf("\n");
	}

	return 0;
}
#if 0
/*
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx$ cc matMult.c 
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx$ ./a.out 
Result matrix is 
10 10 10 10 
20 20 20 20 
30 30 30 30 
40 40 40 40 
*/
#endif
