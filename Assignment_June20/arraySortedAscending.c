/* 2.check if array is sorted in ascending order or not? */

#include<stdio.h>
#define ARRAY_SIZE 10

int arraySortedAscendingOrNot(int arr[], int size)
{

	int i;
	if(size == 0 || size == 1){
		return 1;
	}
	for(i=1;i<size;i++)
	{
	if(arr[i-1]> arr[i])
		return 0;
	}
	return 1;
}


int main()
{

//int arr[] = {10,12,20,23,30,36,45,78,88};
int arr[] = {10,12,5,3,30,36,45,78,88};
int size = sizeof(arr)/sizeof(arr[0]);
 if(arraySortedAscendingOrNot(arr, size))
 {
	printf("Array is sorted in ascending order\n");
 }
 else
 {
	printf("Array is not sorted\n");
 }
	return 0;
}

#if 0
1.case
/*
june20$ cc arraySortedAscending.c 
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june20$ ./a.out 
Array is sorted in ascending order
*/

2.case
/*
june20$ cc arraySortedAscending.c 
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june20$ ./a.out 
Array is not sorted
*/

#endif

