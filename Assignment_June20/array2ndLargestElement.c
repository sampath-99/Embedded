/* 1.Find the second largest number in the array */

#include<stdio.h>
#define ARAY_SIZE 6
 
int main()
{
	int i,arr[ARAY_SIZE] = {12,35,1,10,34,3};	
	int max = arr[0];
	int secondMax = arr[0];
	/*Iterate through array elements*/
	for(i=0;i<ARAY_SIZE;i++){
	if(arr[i]>max){
		secondMax = max;
		max = arr[i];
	}
	else if(arr[i]<max && arr[i]>secondMax)
	{
		secondMax = arr[i];
	}
        }
	printf("second largest num is :%d\n",secondMax);
#if 0
/* june20$ cc array2ndLargestElement.c
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june20$ ./a.out
second largest num is :34
*/
#endif	
	return 0;
}
