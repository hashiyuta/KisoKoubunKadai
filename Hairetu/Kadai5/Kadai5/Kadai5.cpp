#include <stdio.h>

int main()
{
    char str[27];
    for (int i = 0; i < 26; i++)
    {
        str[i] = i + 97;
    }

    str[26] = '\0';

    printf("%s", str);
}