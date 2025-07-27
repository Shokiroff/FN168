#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Massiv elementlari orasidan lokal max ni topish :
int get_x(int a,int b)
{
return a + rand() % (b - a + 1);
}

void lok_max(int ms[],int n)
{
	for(int j = 1; j < n-1; j++)
	{
		if(ms[j] > ms[j+1] && ms[j] > ms[j-1])
		printf("%d ",ms[j]);
	}
}

int main()
{
	system("clear");
	srand(time(NULL));
	int n;
	printf("Massiv elementlari sonin kiriting <<>> ");
	scanf("%d",&n);
	int ms[n];
	for(int i = 0; i < n; i++)
	{
	ms[i] = get_x(10,100);
	printf("%d ",ms[i]);
	}
	printf("\nLokal Max : ");
	lok_max(ms,n);
	return 0;
}
