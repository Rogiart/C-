#include<stdio.h>
int cmax(int x[]);

int main(void) {
	int i;
	static int x[5];
	printf("³‚Ì®”‚ğ5ŒÂ“ü—Í‚µ‚Ä‰º‚³‚¢\n");
	for (i = 0; i <= 4; i++) {
		scanf("%d", &x[i]);
	}
	printf("Å‘å’l‚Í%d‚Å‚·\n", cmax(x));
	return 0;
}
int cmax(int x[]) {
	int i, max = 0;
	for (i = 0; i <= 4; i++) {
		if (i == 0)
			max = x[i];
		else
			if (x[i] > max)
				max = x[i];
	}
	return  max ;
}
