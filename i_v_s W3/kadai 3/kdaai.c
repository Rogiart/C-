#include<stdio.h>
void swap(int );

	int main(void) {
	int x[2] = { 2,5 };
	swap(x);
	return 0;
}

void swap(int x[]) {
	int temp;
	temp = x[0];
	x[0] = x[1];
	x[1] = temp;
}
