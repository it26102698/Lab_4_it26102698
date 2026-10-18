#include<stdio.h>
int main (void)
{
	int f,r,c;	//f is fingerprint , r is retinal scan , c is access card
        printf("Input fingerprint\n");
	scanf("%d",&f);
        printf("Input retinal scan\n");
        scanf("%d",&r);
	printf("Input access card\n");
        scanf("%d",&c);
	if ((f==1&&r==1&&c==0)||(f==1&&r==0&&c==1)||(f==0&&r==1&&c==1)||(f==1&&r==1&&c==1)) //check if atleast 2 of the variables are true(1) at once
	{
		printf("Access Granted\n");		
	}
	else
	{
		printf("Access Not Granted\n");
	}
	return 0;
}
