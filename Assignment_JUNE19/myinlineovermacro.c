#include<stdio.h>

static inline int min(int x,int y)
{
	return (x<y)?x:y;
}

int main()
{

	int a=5;
	int b=10;
	printf("min=%d\n",min(a++,b++));
	printf("a=%d, b=%d\n",a,b);
	return 0;
}

