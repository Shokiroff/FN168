#include <stdio.h>
int top(int n) 
{
    int num = n,sum = 0;
    
    while (num > 0) 
	{
        	int digit = num % 10;
        	if (digit % 2 == 1)
        	    sum += digit * digit;
		num /= 10;  
        }
	return sum;    
}
int main ()
{
	int nat, f;
	printf("Sonni kiriting....");
	scanf("%d", &f);;
	nat = top(f);
	printf("natija = %d", nat);
	return 0;
}    
