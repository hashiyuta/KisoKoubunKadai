#include <stdio.h>

int amount; // 金額
int rem; // 余り

void exchange(int amo, int coin)
{
	int answer = 0; // 硬貨の枚数
	int remamo; // 余りの金額

	if (amo / coin >= 1)
	{
		answer = amo / coin;
		remamo = amo % coin;
		amount = remamo;
	}

	printf("%d 円硬貨 %d 枚\n", coin, answer);
}

int main()
{
	printf("金額を入力してください");
	scanf_s("%d", &amount); // 金額の入力

	exchange(amount,500); // 500円玉の計算
	exchange(amount,100); // 100円玉の計算
	exchange(amount,50); // 50円玉の計算
	exchange(amount,10); // 10円玉の計算
	exchange(amount,5); // 5円玉の計算
	exchange(amount,1); // 1円玉の計算

	return 0;
}
