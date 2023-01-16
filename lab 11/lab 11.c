#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,digit=0;
	int a,b,key;
	
	printf("please enter a number:  ");
	scanf("%d",&n);
	a=n%10;
	key=0;
	while(n!=0)
	{
		b=n%10;
		n=n/10;
		if(b!=a)
		{
			key=1;
			break;
		}
    }
	if(key==1)
		printf("Number is not Karabuk number");
	else
		printf("Number is Karabuk number");
	return 0;
}
