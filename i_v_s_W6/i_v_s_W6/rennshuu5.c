#include <stdio.h>
void sum(int[], int[]);   /*プロトタイプ宣言*/


int main(void) {
	int x[4] = { 11,12,13,14 };
	int y[4] = { 21,22,23,24 };
	int i;
	sum (x,y);                    /*関数呼び出し*/
	for (i = 0; i <= 2; i++)
		printf(" x[%d]とy[%d]の和は%dです．\n", i + 1, i + 1, x[i]);
	return 0;
}

void sum(int x[],int y[]) {     /*関数型，関数名，仮引数*/
	int i;
	for (i = 0; i <= 2; i++)
		x[i] = x[i] + y[i];
	return;
}
