#include<stdio.h>
int main(void) {
	int i, imin, min, num;
	for (i = 1; i <= 5; i++) {
		printf("”š“ü—Í-->");
		scanf("%d", &num);
		if (i == 1) {
			min = num; imin = i;
		}
		if (num < min) {
			min = num; imin = i;
		}
		printf("%d”Ô–Ú‚É“ü—Í‚µ‚½”’l‚ªÅ¬,Å¬’l:num=%d\n", imin, min);
		return 0;
	}