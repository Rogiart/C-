#include <stdio.h> 
int main(void){
	double  b, h;
	printf("三角形の底辺と高さを入力してください-->");
	scanf("%lf %lf", &b, &h);
	printf("三角形の面積は%5.2fです",b*h/2);
return 0;}
