#include<stdio.h>
int main()
{
	int num,i,factorial;
	printf("Enter a number:");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	factorial=factorial*i;
	{
		printf("The factorial of %d is:%d\n",num,factorial);
	}
	return 0;
}
