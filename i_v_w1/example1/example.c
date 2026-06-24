#include<stdio.h>
int main(void) {
	char name[2][20];
	printf("—ˆŽÐ‚µ‚½•û“ñ–¼‚Ì‚¨–¼‘O‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	gets(name[0], 20);
	gets(name[1], 20);
	printf("%s‚³‚ñ‚Æ%s‚³‚ñ‚ª—ˆŽÐ‚³‚ê‚Ü‚µ‚½. \n", name[0], name[1]);
	return 0;
}