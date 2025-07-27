#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int irand(int a, int b)
{
	return a + rand()%(b - a + 1);
}
int main ()
{
	int n;
	printf("massiv uxunligini kiriting...");
	scanf("%d", &n);
	int arr[n];
	int local;
	srand(time(NULL));
	for(int i = 0; i < n; i ++)
		{
			arr[i] =  irand(30,60);
			printf("%d\t",arr[i]);
		};

	for(int i = 1; i < n; i ++)
		{
			if(arr[i] > arr[i -1] && arr[i] > arr[i +1])
				{
					printf("\nlocal maxsimum = %d",arr[i]);
					
				}
		}
	
	return 0;
}
