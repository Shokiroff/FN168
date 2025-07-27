#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int massiv[n];
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        massiv[i] = rand() % 41 - 20;
        printf("%d ", massiv[i]);
    }
    printf("\nimtixon\n");
    for (i = 1; i < n - 1; i++) {
        if (massiv[i] > massiv[i - 1] && massiv[i] > massiv[i + 1])
            printf("%d ", massiv[i]);
    }
    return 0;
}
