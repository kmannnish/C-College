#include <stdio.h>

int arrRev(int arr[], int size)
{
    int temp, i;
    size = size - 1;
    for (i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i];
        arr[size - i] = temp;
    }
    return 0;
}

int arrPrint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nValue of Array at %d = %d", i + 1, arr[i]);
    }
    return 0;
}

int arrPlace(int arr[], int size)
{
    int i, temp;

    size = size - 1;
    for (i = 0; i < size / size; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i];
        arr[size - i] = temp;
    }
    return 0;
}

int main()
{
    int i, size, choice;
    int arr[size];

    printf("\nEnter the Length of the Array :- ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter Value of Array at %d :- ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n* * * Array * * *\n");
    arrPrint(arr, size);

    printf("\n\n\n\t\tDo you want to Reverse the Array.\nType '1' for Yes Otherwise '0' :- ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        arrRev(arr, size);
        arrPrint(arr, size);
    }
    else if (choice == 0)
    {
        printf("\n");
    }

    arrPlace(arr, size);
    arrPrint(arr, size);
    return 0;
}
