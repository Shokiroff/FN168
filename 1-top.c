#include <stdio.h>
#include <stdlib.h>
//Foydalanuvchi kiritgan sonni toq raqamlari kvadratlari yig'indisi:

int cnt(int n)
{
int cnt = 0 , a;
	while(n)
	{
	a = n % 10;
		if(a % 2 != 0)
		cnt = cnt + a*a;
	n = n / 10;
	}
	return cnt;
}

int main()
{
	system("clear");
	int n;
 	printf("Sonni kiriting <<>> ");
	scanf("%d",&n);
 	int res = cnt(n);
 	printf("Result : %d",res);
	return 0;
}
