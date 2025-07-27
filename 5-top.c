#include <stdio.h>
#include <stdlib.h>
//
void ildiz(long n , long *i)
{
	while(*i * *i < n)
	{
		*i = *i + 1;
	}
}

int main()
{
	system("clear");
	long n;
	printf("Sonni kiriting <<>> ");
	scanf("%ld",&n);
	long res = 0;
	ildiz(n,&res);
	printf(" Number = %ld \n Root = %ld",n,res);
	return 0;
}

