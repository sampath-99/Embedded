/*3. Write a program with Macro to find even or odd using bitwise operator.*/

#include<stdio.h>

#define IS_EVEN_OR_ODD(num)   (num & 1)


int main()
{
   int num;

    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    if (IS_EVEN_OR_ODD(num))
        printf("%d is ODD\n", num);
    else
        printf("%d is EVEN\n", num);

    return 0;
}

#if 0

admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments/june28$ gcc evenOdd.c
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments/june28$ ./a.out 
Enter any number to check even or odd: 4
4 is EVEN
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments/june28$ ./a.out 
Enter any number to check even or odd: 7
7 is ODD

#endif
