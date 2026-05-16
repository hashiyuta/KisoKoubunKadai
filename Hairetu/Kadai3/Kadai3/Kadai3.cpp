#include <stdio.h>

int main()
{
    int array[3][4];

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            array[x][y] = (x+1) * (y+1);
        }
    }

    printf("%d %d %d %d\n", array[0][0], array[0][1], array[0][2], array[0][3]);
    printf("%d %d %d %d\n", array[1][0], array[1][1], array[1][2], array[1][3]);
    printf("%d %d %d %d\n", array[2][0], array[2][1], array[2][2], array[2][3]);

    return 0;
}