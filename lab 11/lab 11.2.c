#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,k,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		for(k=4;k>=i;k--)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
