#include <stdio.h>
double max(double[], int);
int main(void) {
	double x[8] = { 10.5,21.3,32.4,58.3,64.2,13.5,17.3,20.5 };
	int to;  //この番号までの最大値を調べる
	puts("何番目の要素まで調べますか？");
	scanf("%d", &to);
	if (to > 8)
		puts("調べる要素番号が大きすぎます");
	printf("最大値は%8.3fです\n", max(x, to));
	return 0;
}

double max(double dd[],int to[]){
	double dmax = dd[0];
	int i;
	for (i = 0; i < to; i++) {
		if (dd[i] > dmax)
			dmax = dd[i];
	}
	return    dmax;
}

