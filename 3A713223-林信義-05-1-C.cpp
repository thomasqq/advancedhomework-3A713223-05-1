#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int Dec;
	char s2[20];
	char s8[20];
	char s16[20];
	
	printf("叫块秈计:");
	scanf("%d",&Dec);
	
	itoa(Dec,s2,2);
	itoa(Dec,s8,8);
	itoa(Dec,s16,16);
	
	printf("锣传秈计%s\n",s2);
	printf("锣传秈计%s\n",s8);
	printf("锣传せ秈计%s\n",s16);
	
	system("PAUSE");
	return 0;
}
