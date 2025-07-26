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
