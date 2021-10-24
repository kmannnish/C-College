#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, rem, res=0;
    int FirstN, LastN, SwappedN, digitCount, base10;

    printf("Enter your Favourite Number :- ");
    scanf("%d", &num);

    temp = num;
    // while(num != 0)
    // {
    //     rem = num%10;
    //     res = res*10 + rem;
    //     num = num/10;
    // }
    
    // printf("\nReverse Number of %d is %d\n", temp, res);

    LastN = temp % 10; //rem is last digit.
    

    digitCount = log10(temp); //FInd the no Digit depended on Base 10.
    base10 = pow(10, digitCount);
    FirstN = temp / base10; //Divison Comes how many time Divide the value.

    SwappedN = LastN;
    SwappedN *= base10; //Swapped Last digit to first place, with the power with Log Base.
    SwappedN += temp %  base10; //Eliminate Last Digit Except First digit by dividing with Log Base.
    SwappedN -= LastN;
    SwappedN += FirstN;

    printf("\nOriginal Number :- %d", temp);
    printf("\nNumber after Swapping First and Last digit :- %d", SwappedN);

    return 0;
}