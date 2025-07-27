#include <stdio.h>

int main() {
    int son, raqam, yigindi = 0;
    scanf("%d", &son);
    while (son > 0) {
        raqam = son % 10;
        if (raqam % 2 != 0)
            yigindi += raqam * raqam;
        son /= 10;
    }
    printf("imtixon\n%d\n", yigindi);
    return 0;
}

