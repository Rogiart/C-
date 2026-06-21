#include<stdio.h>
double function3(input);

int main(void) {
	double x; int y;
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%lf", &x);
	y = x;
	if (y == x)
		printf("%d‚Ì‹t”‚Í%f‚Å‚·\n", y, function3(x));
	else
		printf("“ü—Í‚ª³‚µ‚­‚ ‚è‚Ü‚¹‚ñ\n");
	return 0;
}

double function3(double input){
	return 1 / input;
}