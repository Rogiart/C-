#include  <stdio.h>
void tanse(char t[3][10]);   /*プロトタイプ宣言*/

int main(void) {
	char t[3][10] = { "靴下","ズボン","シャツ" };
	tanse(t);                    /*関数呼び出し*/
	return 0;
}

void tanse(char t[3][10]){
	int i;
	for (i = 0; i < 3; i++)
		printf ("%d段目は%sです.\n", i + 1, t[i]);
	return;
}
