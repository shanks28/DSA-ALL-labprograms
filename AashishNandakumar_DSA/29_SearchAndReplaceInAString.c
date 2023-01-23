#include <stdio.h>
#include <string.h>

int pattern_match(char OG[], char pat[], int T_pos)
{
    int len = strlen(pat);
    int i;
    for (i = 0; i < len; i++)
    {
        if (OG[T_pos] != pat[i])
            break;
        T_pos++;
    }

    if (i == len)
        return 1;
    else
        return 0;
}

int copy_string(char res[], char rep[], int res_pos)
{

    for (int i = 0; rep[i] != '\0'; i++)
    {
        res[res_pos++] = rep[i];
    }

    return res_pos;
}

int main()
{
    char OG[100], pat[10], rep[10], res[100];
    // int T_pos;
    printf("Enter the main string: ");
    scanf("%s", OG);
    printf("Enter pattern string: ");
    scanf("%s", pat);
    printf("Enter the string that will be replaced: ");
    scanf("%s", rep);
    int res_pos = 0;
    int i = 0;
    for (i = 0; OG[i] != '\0';)
    {
        if (pattern_match(OG, pat, i) == 1)
        {

            res_pos = copy_string(res, rep, res_pos);

            i += strlen(pat);
        }
        else
        {
            res[res_pos++] = OG[i++];
        }
    }
    res[res_pos] = '\0';
    printf("Result: %s", res);

    return 0;
}
