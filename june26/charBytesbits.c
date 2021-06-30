/*1. Write a program to print bits in the character byte without using bitwise operator. (Hint: Use Union & Bit fields) */

#include<stdio.h>

union charBites
{
  unsigned char val;
   struct value{
   unsigned char a0:1;
   unsigned char a1:1;
   unsigned char a2:1;
   unsigned char a3:1;
   unsigned char a4:1;
   unsigned char a5:1;
   unsigned char a6:1;
   unsigned char a7:1;
   } bits;
};

int main()
{

union charBites t; // Here t is an object of the union charBites
t.val = 5;
printf("t.val = %d\n",t.val);
printf("t.bits.a0 = %d\n",t.bits.a0);
printf("t.bits.a1 = %d\n",t.bits.a1);
printf("t.bits.a2 = %d\n",t.bits.a2);
printf("t.bits.a3 = %d\n",t.bits.a3);
printf("t.bits.a4 = %d\n",t.bits.a4);
printf("t.bits.a5 = %d\n",t.bits.a5);
printf("t.bits.a6 = %d\n",t.bits.a6);
printf("t.bits.a7 = %d\n",t.bits.a7);


return 0;
}

#if 0

admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments$ gcc charBytesbits.c 
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments$ ./a.out 
t.val = 7
t.bits.a0 = 1
t.bits.a1 = 1
t.bits.a2 = 1
t.bits.a3 = 0
t.bits.a4 = 0
t.bits.a5 = 0
t.bits.a6 = 0
t.bits.a7 = 0
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments$ gedit charBytesbits.c 
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments$ gcc charBytesbits.c 
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments$ ./a.out 
t.val = 5
t.bits.a0 = 1
t.bits.a1 = 0
t.bits.a2 = 1
t.bits.a3 = 0
t.bits.a4 = 0
t.bits.a5 = 0
t.bits.a6 = 0
t.bits.a7 = 0


#endif






