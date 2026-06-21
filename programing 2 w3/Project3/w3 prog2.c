#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
	FILE* fpi, * fpo; //ストリームポインタ
	char buf[256];
	if ((fpi = fopen("C:\\PROG\\data.txt", "r")) == NULL) {
		printf("入力ファイルを開けません。¥n");
		exit(-1);
	}
	if ((fpo = fopen("C:\\PROG\\data-out.txt", "w")) == NULL) {
		printf("出力ファイルを開けません。¥n");
		exit(-2);
	}
	while (fgets(buf, 256, fpi) != NULL) { //ファイルから1行読み込み、
		printf("%s", buf); //画面に表示し、
		fputs(buf, fpo); //ファイルに書き込む
	} //ファイルが終わりになるまで繰り返す
	fclose(fpo);
	fclose(fpi);
	return 0;
}