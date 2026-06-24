#include<stdio.h>
int main(void) {

	char name[30];
	double weight, height;
	double BMI;

	puts("お名前を入力してください．");
	gets_s(name, 30);

	puts("身長をcm単位で入力してください．");
	scanf_s("%lf", &height);

	puts("体重をkg単位で入力してください．");
	scanf_s("%lf", &weight);

	BMI = weight / ((height / 100) * (height / 100));
	printf("%sさんのBMIは%8.3fです．\n", name, BMI);

	return 0;
}