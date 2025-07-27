#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("clear");
	int ms[5][5];
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			printf("Massivning [%d] - qatori [%d] - ustunini kiriting <> ",i,j);
			scanf("%d",&ms[i][j]);
		}
	}
	printf("\nMatritsaning birinchi holati <<>> \n");
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			printf("%2d ",ms[i][j]);
		}
	printf("\n");
	}
			printf("\n Natija : \n");
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{	if(j > i)
			ms[i][j] = 0;
			printf("%2d ",ms[i][j]);
		}
	printf("\n");
	}
return 0;
}

