/*C program to check whether a number is power of 2 or not*/

#include <stdio.h>

int main()
{
   int num;

   printf("Enter the number you want to test: ");
   scanf("%d", &num);

   //condition to check whether number is power of two or not
   if((num != 0) && ((num &(num - 1)) == 0))
      printf("\n%d is a power of 2", num);

   else
      printf("\n%d is not a power of 2 \n", num);

 return 0;
}
#if 0

admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments/june28$ gcc powerof2.c 
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments/june28$ ./a.out 
Enter the number you want to test: 7

7 is not a power of 2 
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments/june28$ ./a.out 
Enter the number you want to test: 8

8 is a power of 2
#endif
