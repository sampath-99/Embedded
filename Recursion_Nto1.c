#include<stdio.h>

int recursion_Nto1(int N)
{

	if(N<=0)
	{
	    return;
	}
	else
	{
	printf("N=%d\n",N);
	recursion_Nto1(N-1);
	}

}

int main()
{
int N=5
recursion_Nto1(N);
return 0;
}
