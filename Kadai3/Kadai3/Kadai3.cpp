#include <stdio.h>

void fizzbuzz(int num)
{
    if (num % 15 == 0)
    {
        printf("%d FizzBuzz\n", num);
    }
    else if (num % 3 == 0)
    {
        printf("%d Fizz\n", num);
    }
    else if (num % 5 == 0)
    {
        printf("%d Buzz\n", num);
    }
    else
    {
        printf("%d\n", num);
    }
}

int main()
{
    bool error = false;
    int min; // 開始値
    int max; // 終了値
    int num; // 現在の値

    while (true)
    {
        printf("開始値と終了値を入力してください\n");
        scanf_s("%d", &min);
        scanf_s("%d", &max);

        if (min < 1 || min > 1000 || max < 1 || max > 1000)
        {
            printf("開始値と終了値は0～1000で入力してください\n");
            error = true;
        }

        if (min > max)
        {
            printf("開始値が終了値よりも大きいです\n");
            error = true;
        }

        if (error == false) break;
    }

    num = min;

    while (num <= max)
    {
        fizzbuzz(num);
        num++;
    }
}
