#include<stdio.h>
double area(double, double);

int main(void) {
	double a, b;
	printf("’ê•Ó‚Æ‚‚³‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%lf%lf", &a, &b);
	printf("–ÊÏ‚Í%10.4f‚Å‚·\n", area(a, b));
	return 0;
}

double area(double x, double y) {
	return(x * y / 2);
}
