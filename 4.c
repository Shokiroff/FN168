#include <stdio.h>
int main()
{
int arr[5][5];
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 5; j++) {
scanf("%d", &arr[i][j]);
}
}
printf("Output:\n");
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 5; j++) {
if (i == j) {
printf("%2d ", 0);
} else {
printf("%2d ", arr[i][j]);
}
}
printf("\n");
}
return 0;
}
