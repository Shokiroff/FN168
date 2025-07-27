#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// + belgilarini +++ ga o'zgartirish :

void func(char *ptr)
{
	int n = strlen(ptr);
	int j = 0;
	while(j < n)
	{
		if(ptr[j] == '+')
		{
			n = n + 2;
			//ptr = realloc(ptr,n * sizeof(char));
			for(int i = n - 1; i > j; i--)
			ptr[i] = ptr[i-2];
			ptr[j+1] = '+';
			ptr[j+2] = '+';

		j += 2;
		}
	j++;
	}
ptr[j] = '\0';
}

int main()
{
	system("clear");
	char str[256];
	printf("Enter the string <<>> ");
	scanf("%[^\n]%*c",str);
	func(str);
	puts(str);
	return 0;
}
// Realloc bilan ishlamadi !

