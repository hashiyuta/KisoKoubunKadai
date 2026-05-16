#include <stdio.h>

int main()
{
    int num[5];
    int max = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf_s("%d", &num[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    printf("最大値は%dです", max);
}
