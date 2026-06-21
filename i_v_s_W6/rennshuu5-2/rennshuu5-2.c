#include  <stdio.h>
void   message1(x);  /*プロトタイプ宣言*/
void    message2(x);  /*プロトタイプ宣言*/
void   message3(x);  /*プロトタイプ宣言*/

int main(void) {
	char name[30];
	int num;
	printf("名前を入力して下さい：");
	gets(name);
	printf("正の整数を入力して下さい-->");
	scanf("%d", &num);

	switch (num % 3) {
	case    0:    message1(name); break;  /*余りが0の場合*/
	case    1:    message2(name); break;  /*余りが1の場合*/
	case    2:    message3(name); break;  /*余りが2の場合*/
	}
	return 0;
}

void message1(char x[]) {      /*関数型，関数名，仮引数*/
	printf("%sさん，おめでとう．当選です．\n", x);
	return;
}
void message2(char x[]) {      /*関数型，関数名，仮引数*/
	printf("%sさん，残念ながら落選です．\n", x);
	return;
}
void message3(char x[]) {      /*関数型，関数名，仮引数*/
	printf("%sさん，もう一度プログラムを実行してください\n", x);
	return;
}
