#include <stdio.h>
#include "Kadai1.h"

struct Parameter
{
    char name[10];
    int hp;
    int attack;
    int defense;
};

void DispParameter(Parameter parameter)
{
    printf("名前 %s\n", parameter.name);
    printf("HP %d\n", parameter.hp);
    printf("攻撃力 %d\n", parameter.attack);
    printf("防御力 %d\n", parameter.defense);
}

int main()
{
    Parameter slime_parameter = { "slime", 30, 10, 10 };
    DispParameter(slime_parameter);

    Parameter goblin_parameter = { "goblin", 100, 30, 50 };
    DispParameter(goblin_parameter);

    return 0;
}