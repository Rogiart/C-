#include<stdio.h>
int main(void) {
	int a = 30, b = 20, c;
	double d = 3.64, e = -12.34;
	char f = 'A', g = 'B', x;
	a = b; b = d; c = e; d = c; x = f; f = g; g = x;
	printf("a=%d,b=%d,c=&d,d=%f,e=%f,f=%c,g=%c\n,a,b,c,d,e,f,g);")
}