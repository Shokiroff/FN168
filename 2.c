#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
}
