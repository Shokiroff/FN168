#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int polindrom(char *str)
{
    int chap = 0;
    int right = strlen(str) - 1;
    while (chap < right)
    {
        char ychap = tolower(str[chap]);
        char yright = tolower(str[right]);

        if (ychap != yright)
        {
            return 0;
        }

        chap++;
        right--;
    }
    return 1;
}
int main()
{
    FILE *f = fopen("Strings.txt", "r");
    FILE *p = fopen("result.txt", "w");

    if (f == NULL)
    {
        printf("Xatolik !\n");
        return 1;
    }
    if (p == NULL)
    {
        printf("Xatolik !\n");
        fclose(f);
        return 1;
    }

    char word[256];

    while (fscanf(f, "%255s", word) == 1)
    {
        if (polindrom(word))
        {
            fprintf(p, "%s\n", word);
        }
    }

    fclose(f);
    fclose(p);

    printf("Polindrom so'zlar otkazildi  \n");
    return 0;
}
