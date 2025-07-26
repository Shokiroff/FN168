#include <stdio.h>
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
