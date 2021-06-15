#include<stdio.h>
#include<string.h>
int main()
{
	char password[25];
  
	printf("password:\n");
	int p=0;
	do{
		password[p]=getchar();
		if(password[p]!='\r'){
		    printf("*");
		}
		p++;
	}while(password[p-1]!='\r');
	password[p-1]='\0';
	printf("\nYou have entered %s as password\n",password);
	getchar();

	return 0;
}
