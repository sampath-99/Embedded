/*2. Write a program to Swap the nibble in a byte without using bitwise operator.*/

#include <stdio.h>


union U
{
  struct S{

	unsigned char u0 : 1;
	unsigned char u1 : 1;
	unsigned char u2 : 1;
	unsigned char u3 : 1;
	unsigned char u4 : 1;
	unsigned char u5 : 1;
	unsigned char u6 : 1;
	unsigned char u7 : 1;
	
    }n;
  unsigned char val;
};
   


int main()
{

	union U x,y;
	x.val = 0x5;
	y.n.u0 = x.n.u7;
	y.n.u1 = x.n.u6;
	y.n.u2 = x.n.u5;
	y.n.u3 = x.n.u4;
	y.n.u4 = x.n.u3;
	y.n.u5 = x.n.u2;
	y.n.u6 = x.n.u1;
	y.n.u7 = x.n.u0;
 	printf("0x%x\n", y.val);
    	return 0;
}


#if 0
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments$ gcc swapNibbleByte.c 
admin-pc@adminpc-HP-EliteBook-840-G1:~/assignments$ ./a.out 
0xa0
#endif
