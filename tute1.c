#include<stdio.h>

int main()
{
	int a = 3, b= 3;

	printf("%d %d %d %d %d", a++, a--, --a, ++a, a);

	printf("%d %d %d", ++a, a , a++);
	return 0;
}
// Execution Starts from Right to Left <
// Printing Starts from Left to Right  >

// Printing Stage  ->  [9],[10],[10],[10],[10]
// Current Value   -> a = 10, 10, 11, 10, 9, 10

// Print = 5, 4, 3 
// Current = 3, 4, 5