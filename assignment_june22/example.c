/*2.example output program for Array*/
#include<stdio.h>

int main()
{
	int a[3][4]={ 	{10,11,12,13},
			{20,21,22,23},
			{30,31,32,33}};
int i,j;
for(i=0;i<3;i++)
{

	printf("Address of %dth array = %u %u\t",i,a[i],*(a+i));
	for(j=0;j<4;j++)
	{

	printf("%d\n",a[i][j]);
	printf("%d\n",*(*(a+i)+j));
	}
	printf("\n");
}
return 0;
}

#if 0

/*
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june22$ ./a.out 
Address of 0th array = 3213379536 3213379536	10
10
11
11
12
12
13
13

Address of 1th array = 3213379552 3213379552	20
20
21
21
22
22
23
23

Address of 2th array = 3213379568 3213379568	30
30
31
31
32
32
33
33
*/
#endif
