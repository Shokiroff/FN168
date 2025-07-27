#include <stdio.h>

void func(long son, long *ildiz) {
    if (*ildiz == 0)
        return;
    *ildiz = *ildiz - 1;
    son = son * son;
    func(son, ildiz);
    if (*ildiz == 0)
        printf("imtixon\n%ld\n", son);
}

int main() {
    long son = 49, ildiz = 2;
    func(son, &ildiz);
    return 0;
}
