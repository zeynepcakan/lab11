#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char A,B,C,D;
	int i;
	for(i=1;i<=4;i++)
	{
		if(i==1)
			printf("      %c\n",65);
		if(i==2)
			printf("    %c %c %c\n",65,66,65);
		if(i==3)
			printf("  %c %c %c %c %c \n",65,66,67,66,65);
		if(i==4)
			printf("%c %c %c %c %c %c %c\n",65,66,67,68,67,66,65);
		printf("");
	}
	return 0;
}
