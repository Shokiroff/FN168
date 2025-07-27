#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
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
=======
int main()
{
int N;
scanf("%d", &N);
int arr[N];
srand(time(NULL));
printf("N >>>");
for (int i = 0; i < N; i++)
{
arr[i] = rand() % 100 + 1;
printf("%d", arr[i]);
if (i < N - 1) {
printf(",");
}
}
printf("\n");
printf("Output ");
int lm = 0;
for (int i = 1; i < N - 1; i++)
{
if (arr[i] > arr[i-1] && arr[i] > arr[i+1])
{
printf("%d ", arr[i]);
lm ++;
}
}
printf("%d\n", lm);
return 0;
>>>>>>> 3df870b854a5064646dd35119776eb66cb03cdd4
}
