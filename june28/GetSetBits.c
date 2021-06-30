/*1. Write a macro to get the bit and set the bit.*/

#include<stdio.h>

#define GET_BIT(num,pos) ((num & (1U<<pos))>>pos)
#define SET_BIT(num,pos) (num |= (1U<<pos))    
#define CLEAR_BIT(num, pos) (num &= (~(1U<< pos)))
#define TOGGLE_BIT(num, pos) (num ^= (1U<< pos))

int main()
{
    unsigned int num, pos, bitStatus;
    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Input bit position you want to check */
    printf("Enter pos bit to check (0-31): ");
    scanf("%d", &pos);

    /* Right shift num, n times and perform bitwise AND with 1 */
    bitStatus = GET_BIT(num,pos);
    printf("The %d bit is get %d\n", pos, bitStatus);

    bitStatus = SET_BIT(num,pos);
    printf("The %d bit is set to %d\n", pos, bitStatus);
    
    bitStatus = CLEAR_BIT(num,pos);
    printf("The %d bit is clear to %d\n", pos, bitStatus);
    
    bitStatus =TOGGLE_BIT(num,pos);
    printf("The %d bit is toggle to %d\n", pos, bitStatus);

    return 0;
}


#if 0
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments/june28$ gcc GetSetBits.c 
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments/june28$ ./a.out 
Enter any number: 8
Enter pos bit to check (0-31): 2
The 2 bit is get 0
The 2 bit is set to 12
The 2 bit is clear to 8
The 2 bit is toggle to 12
admin-pc@adminpc-HP-EliteB
#endif
