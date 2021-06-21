/*4.Find maximum sum of sub array*/

#include <stdio.h>

int maxSubArraySum(int arr[], int n) 
{
  int max_sum = 0;
  int current_sum = 0;

  for(int i=0; i<n; i++) {
    current_sum = current_sum + arr[i];
    if (current_sum < 0)
      current_sum = 0; 
    if(max_sum < current_sum)
      max_sum = current_sum; 
  }
  return max_sum;
}


int main() {
  int array[] = {1,-2,3,-1,2};
  int n = sizeof(array) / sizeof(array[0]);
  printf("Maximum SubArray is: %d\n", maxSubArraySum(array, n));
  return 0;
}

#if 0
/*
 
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june20$ cc maxSubArraySum.c
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june20$ ./a.out 
Maximum SubArray is: 4

*/

#endif
