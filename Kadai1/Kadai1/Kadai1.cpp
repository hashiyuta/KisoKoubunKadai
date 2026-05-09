#include "disp.h"
#include <time.h>
#include <stdlib.h>

int main()
{
	// 乱数のシード値作成
	srand((unsigned int)time(NULL));

	int japanese = rand() % 101; // 国語
	int math = rand() % 101;     // 数学
	int english = rand() % 101;  // 英語
	int social = rand() % 101;   // 社会
	int science = rand() % 101;  // 理科

	// 合計点と平均点を計算する関数
	dispResult(japanese, math, english, social, science);

	// 合否判定
	dispPass(japanese, math, english, social, science);

	return 0;
}
