/*5. Do exclusive OR for 20,20,40,40,13,13,11,88,88,98,99,11,11 Manually.*/

#include<stdio.h>

int getElements(int arr[], int n)
{
    // array to store the original
    // elements
    int xor_tmp;
  
    for (int i = 0; i < n; i++) {

        xor_tmp = xor_tmp ^ arr[i];
    }
 
    return xor_tmp;
}


int main()
{
    int arr[] = {20,20,40,40,13,13,11,88,88,98,99,11,11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("xorOfArray = %d\n", getElements(arr, n));
    return 0;
}
