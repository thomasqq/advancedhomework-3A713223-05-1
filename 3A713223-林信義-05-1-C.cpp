#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int Dec;
	char s2[20];
	char s8[20];
	char s16[20];
	
	printf("�п�J�@�ӤQ�i��Ʀr:");
	scanf("%d",&Dec);
	
	itoa(Dec,s2,2);
	itoa(Dec,s8,8);
	itoa(Dec,s16,16);
	
	printf("�ഫ��A���쪺�G�i��Ʀr��%s\n",s2);
	printf("�ഫ��A���쪺�K�i��Ʀr��%s\n",s8);
	printf("�ഫ��A���쪺�Q���i��Ʀr��%s\n",s16);
	
	system("PAUSE");
	return 0;
}
