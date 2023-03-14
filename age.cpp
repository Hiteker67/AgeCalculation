#include<stdio.h>
int main()
{
	int age;
	char nat;
	printf("enter person age:");
	scanf("%d",&age);
	fflush(stdin);
	printf("enter nation:");
	scanf("%c",&nat);
	if((age>=18)&&(nat=='c'||nat=='I'))
	{
	 printf("\neligible for vote");
    }
	else
	{
	 printf("\nnot eligible for vote");
    }
	return 0;
}
