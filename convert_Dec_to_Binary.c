#include<stdio.h>

convertDECtoBIN(int dec)
{
   if(dec == 0)
	return 0;
   else
	return(dec%2 + 10 * convertDECtoBIN(dec/2));

}

int main()
{

	int dec,bin;
	printf("enter a decimal number:");
	scanf("%d",&dec);
	bin=convertDECtoBIN(dec);
	printf("%d %d\n",dec,bin);
	return 0;
}
