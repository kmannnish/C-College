#include<stdio.h>
int main()
{
		char num[30];
		char num2[30];
		printf("Enter First Name : ");
		scanf("%s",&num);
		printf("Enter Secound Name : ");
		scanf("%s",&num2);
		
		int i=0, j, size=0;
		
		while(num[i]!='\0')
		{
			i++;
		}
		while(num[size]!='\0')
		{
			size++;
		}
		for(j=0;j<=size;j++)
		{
			num[i]=num2[j];
			i++;
		}
		
		printf("Full Name : %s",num);
		
		return 0;
}