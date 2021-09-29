#include <stdio.h>

int main()
{
    int arr[5], i, j = 0, c = 0, num;

    for (i = 0; i <= 4; i++)
    {
        printf("Enter Element Number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        c = 0 ;
        for (j = 0; j <= 5; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
                break;
            }
        printf("Total Times %d\n", c);
        }
        printf("\nIndex %d Value %d : ", i+1, arr[i]);
    }
    return 0;
}
