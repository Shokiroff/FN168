#include <stdio.h>

int main() {
    int i, j, massiv[5][5];
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &massiv[i][j]);
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (i > j)
                massiv[i][j] = 0;
    printf("imtixon\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            printf("%d ", massiv[i][j]);
        printf("\n");
    }
    return 0;
}
