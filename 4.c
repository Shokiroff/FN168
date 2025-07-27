#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int mrand(int a, int b)	
{
	return a + rand() % (b - a + 1);
}
int main()
{
	int arr[5][5];
	srand(time(NULL));
	for(int i = 0; i < 5; i++)
		{
			for(int j = 0; j < 5; j ++)
				{
					arr[i][j] = mrand(10, 20);
					printf("%3d",arr[i][j]);	
				}
			printf("\n");
		}
	printf("Natija\n\n\n");

	for(int i = 0; i < 5; i ++)
		{
			for(int j = i + 1;j < 5; j ++)
				{
					arr[i][j] = 0;
				}
		}		
	for (int i = 0; i < 5; i ++)
		{
			for(int j = 0; j < 5; j ++)
				{
					printf("%3d", arr[i][j]);
				}
		printf("\n");
		}
	return 0;
}
