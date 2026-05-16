#include <stdio.h>

void agePrint(int age)
{
    printf("年齢は%dです\n", age);
}

int main()
{
    int age[] = { 15,32,11,48 };

    for (int i = 0; i < 4; i++)
    {
        agePrint(age[i]);
    }

    return 0;
}
