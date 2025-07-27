#include <stdio.h>
<<<<<<< HEAD
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

=======
void ildiz(long number, long *root)
{
    double f = 0;
    while ((f * f) < number)
        f += 0.1;
    *root = (long)f;
}
int main()
{
    long son, result;
    printf("Enter number >>> ");
    scanf("%ld", &son);
    result = 0;
    ildiz(son, &result);
    printf("natija = %ld\n", result);
    return 0;
}
>>>>>>> 3df870b854a5064646dd35119776eb66cb03cdd4
