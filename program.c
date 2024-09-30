// C program to demonstrate
// conversion of int to char
// using typecasting
#include <stdio.h>

// Driver code
int main()
{
	int N;
  printf("Enter number:");
  scanf("%d",&N);
  printf("\nCharacter:");
	printf("%c", (char)(N));
	return 0;
}

