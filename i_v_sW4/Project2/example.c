#include<stdio.h>
int function2(int x) {
	return x + 1;
}

int main(void) {
	int i, x = 0;
	for (i = 0; i < 3; i++) {
		x = x + function2(i);
	}
	printf("%d\n", x);
	return 0;
}