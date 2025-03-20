#include<stdio.h>
#include<math.h>
int main()
{
	int num, originalnum,result=0;
	printf("Enter a number:");
	scanf("%d",&num);
	originalnum !=0;
	while(num!=0)
	{
		result=result + pow(num%10,3);
		num=num/10;
	}
	if(originalnum ==result)
	{
	 printf("%d is an armstrong number.\n",originalnum);	
	}
	else
	{
		printf("%d is not an armstrong number.\n",originalnum);
	}
	return 0;
	
}
