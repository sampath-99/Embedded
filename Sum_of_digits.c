#include<stdio.h>
int main()
{
	int n,tmp,sum=0,rem;
	printf("enter number: ");
	scanf("%d",&n);
	tmp = n;

	 while(tmp!=0)
	 {
		 rem = tmp%10;
		 sum = sum+rem;
		 tmp = tmp/10;
	 }
	 printf("sum = %d\n",sum);
	 return 0;

}
	

