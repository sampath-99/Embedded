#include<stdio.h>

int recursion1toN(int N)
{

	if(N<=0)
	{
	    return;
	}
	else
	{
	recursion1toN(N-1);
	}

	printf("N=%d\n",N);
}

int main()
{
int N=10;
recursion1toN(N);
return 0;
}
