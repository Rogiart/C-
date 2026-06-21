#include <stdio.h>
int main(void) {
	static char name[][6] = { "Hanako" };
	static int data[4] = { 1,2,5,6 };
	puts(name);
	printf(" % d”Ô–Ú‚Ì’l‚Í%d\n", 3, data[2]);
	return 0;
}