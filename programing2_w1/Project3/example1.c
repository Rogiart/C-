#include <stdio.h>
#include <string.h> //文字列処理関数のヘッダファイル

int main(void) {
    char str[80];
    int len;

    strcpy(str, "Media");    //strに"Media"をコピー
    len = strlen(str);      //lenはstrの長さ
    printf("str: %s (%d)\n", str, len);

    strcat (str, "Information");  //strに"Information"を連結
    len = strlen(str);      //lenはstrの長さ
    printf("new: %s (%d)\n", str, len);

    return 0;
}