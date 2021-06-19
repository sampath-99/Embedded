#include<stdio.h>

inline int myfunc()
{

	return 3+4;

}

int main()
{

	int ret;
	ret = myfunc();
	printf("%d\n",ret);
	return 0;
}
