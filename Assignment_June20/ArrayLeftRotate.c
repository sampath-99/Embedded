/*3.Left rotate an array upto user's choice.*/

#include<stdio.h>
#define N 5
 
// Function to left-rotate an array by one position
void leftRotateByOne(int arr[], int n)
{
    int first = arr[0];
    for (int i=0; i<n - 1;i++) {
        arr[i] = arr[i+1];
    }
 
    arr[n-1] = first;
}
 
// Function to left-rotate an array by no of positions
void leftRotate(int arr[], int r, int n)
{
    for (int i=0; i<r;i++) {
        leftRotateByOne(arr, n);
    }
}

int main()
{
	int arr[N],i,tmp,r;
	printf("enter array elements: ");
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}

	printf("enter no of rotations: ");
	scanf("%d",&r);

	leftRotate(arr, r, N);
 
	printf("Left rotation array is: \n");	
    	for (int i = 0; i < N; i++) {
        	printf("%d ", arr[i]);
    	}
 }

#if 0

/*
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june20$ cc ArrayLeftRotate.c 
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june20$ ./a.out 
enter array elements: 1
2
3
34
41
enter no of rotations: 2
Left rotation array is: 
3 34 41 1 2 
*/

#endif
