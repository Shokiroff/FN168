#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Polindrom so'zlarni boshqa faylga ko'chirish:
int main()
{
	system("clear");
    	char name[30];
    	printf("Fayl nomini kiriting <<>> ");
    	scanf("%[^\n]%*c", name);
    	FILE *f = fopen(name, "r");
    	if (f == 0)
    	{
        printf("File bilan ishlashda xatolik!\n");
        return 0;
    	}
    	FILE *t = fopen("Res.txt", "w");
    	if (t == 0)
    	{
        printf("Yangi fayl ochilmadi!\n");
        fclose(f);
        return 0;
    	}
    	char res[1000], qwe[10000] = "";
    	while (fscanf(f, "%[^\n]%*c", res) > 0)
    	{
        strcat(qwe, res);
        strcat(qwe, " ");
    	}
    	char *tok = strtok(qwe, " ");
    	while (tok != NULL)
    	{
        int len = strlen(tok);
        int is_pal = 1;

        for (int i = 0; i < len / 2; i++)
        {
            if (tok[i] != tok[len - i - 1])
            {
                is_pal = 0;
                break;
            }
        }
        if (is_pal)
        {
            fprintf(t, "%s\n", tok);
        }
        tok = strtok(NULL, " ");
    	}
    	fclose(f);
    	fclose(t);
    	system("start Res.txt");
    	return 0;
}

