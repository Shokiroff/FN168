<<<<<<< HEAD
#include <stdio.h>
<<<<<<< HEAD
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
=======
int main()
{
long long n;
printf("Input: ");
scanf("%lld", &n);
long long sum = 0;
long long tn = n;
while (tn > 0) {
int digit = tn % 10;
if (digit % 2 == 0) {
sum += (long long)digit * digit * digit;
}
tn /= 10;
}
printf("Output: %lld\n", sum);
return 0;
}
=======
#include <stdio.h>
int main()
{
long long n;
printf("Input: ");
scanf("%lld", &n);
long long sum = 0;
long long tn = n;
while (tn > 0) {
int digit = tn % 10;
if (digit % 2 == 0) {
sum += (long long)digit * digit * digit;
}
tn /= 10;
}
printf("Output: %lld\n", sum);
return 0;
}
>>>>>>> 31e49d764317ed0339c051b4ae9a574487efdc95
>>>>>>> 3df870b854a5064646dd35119776eb66cb03cdd4
