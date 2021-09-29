#include<stdio.h>

int main()
{
	int arr[5], i, j = 0, c = 0, num;
	
	for(i = 0;i<=4;i++)
	{
		printf("Enter Element Number %d : ", i+1);
		scanf("%d", &arr[i]);
//		printf("Value is : %d\n", arr[i]);
	}
	for(i = 0;i<=4;i++)
	{
        // c = 0;
		for(j = 0 ; j <= 4 ; j++)
		{
			
			num = arr[j];
        	if(num == arr[i])
			{
				c++;
                break;
//				printf("\nValue :  %d", arr[j]);
			}
		}
				printf("\nValue :  %d", num);
				printf("\nTimes %d\n", c);
	}
	return 0;
}