#include <stdio.h>
void ildiz(long number, long *ildizz)
{
	long i = 0;
	while(i * i <= number)
	{
		i ++;
	}
	*ildizz = i - 1;
}
int main()
{
	long n, re;
	printf("Sonni kiritng...");
	scanf("%ld",&n);
	
	ildiz(n,&re);
	printf("%ld ning ildizi = %ld", n,re);
	return 0;
}

