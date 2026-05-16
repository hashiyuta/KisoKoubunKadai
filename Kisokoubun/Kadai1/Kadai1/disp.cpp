#include "disp.h"
#include <stdio.h>

// グローバル変数
static int total;
static float average;

// 合計点と平均点の計算　各教科の得点とともに出力
void dispResult(int japanese, int math, int english, int social, int science)
{
	// 合計点と平均点を計算
	total = japanese + math + english + social + science;
	average = (float)total / 5.0f;

	// 結果を出力
	printf("国語 %d点 / 数学 %d点 / 英語 %d点 / 社会 %d点 / 理科 %d点\n",
		japanese, math, english, social, science);
	printf("合計点 %d / 平均点 %d\n", total, (int)average);
}

// 合否判定
void dispPass(int japanese, int math, int english, int social, int science)
{
	bool pass = true; // すべての条件を満たしているか

	// 平均点が60点以上
	const int pass_average = 60;

	if (average < pass_average)
	{
		pass = false;
		printf("平均点が60点未満\n");
	}

	// 40点未満の教科
	const int pass_score = 40; // 教科ごとの合格点

	bool pass_japanese = (japanese >= pass_score);
	bool pass_math = (math >= pass_score);
	bool pass_english = (english >= pass_score);
	bool pass_social = (social >= pass_score);
	bool pass_science = (science >= pass_score);

	if (!pass_japanese)
	{
		pass = false;
		printf("国語が40点未満\n");
	}
	if (!pass_math)
	{
		pass = false;
		printf("数学が40点未満\n");
	}
	if (!pass_english)
	{
		pass = false;
		printf("英語が40点未満\n");
	}
	if (!pass_social)
	{
		pass = false;
		printf("社会が40点未満\n");
	}
	if (!pass_science)
	{
		pass = false;
		printf("理科が40点未満\n");
	}

	if (pass) printf("合格\n");
	else printf("不合格\n");
}