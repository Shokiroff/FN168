#include <stdio.h>
#include <string.h>

int main() {
    char matn[256];
    fgets(matn, sizeof(matn), stdin);
    int i;
    printf("imtixon\n");
    for (i = 0; matn[i] != '\0'; i++) {
        if (matn[i] == '+')
            printf("+++");
        else
            printf("%c", matn[i]);
    }
    return 0;
}
