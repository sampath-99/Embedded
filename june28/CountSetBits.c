/*2. Write a program to count set bits.*/

#include<stdio.h>   

unsigned int countSetBits(int n)
{
        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
}

int main()
{

	int i = 9;
	printf("countSetBits = %d\n",countSetBits(i));
	return 0;
}
#if 0
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments/june28$ vim CountSetBits.c
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments/june28$ gcc CountSetBits.c
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments/june28$ ./a.out
countSetBits = 2
#endif
