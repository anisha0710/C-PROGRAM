#include<stdio.h>
int main()
{
	int num,originalnum,reverse=0,digit;
	printf("Enter a number:");
	scanf("%d",&num);
	originalnum=num;
	while(num!=0)
	{
		digit=num%10;
		reverse=reverse*10+digit;
		num=num/10;
	}
	if (originalnum==reverse)
	{
		printf("%d is a palindrome.\n",originalnum);
	}
	else
	{
		printf("%d is not a palindrome.\n",originalnum);
	}
	return 0;
}
