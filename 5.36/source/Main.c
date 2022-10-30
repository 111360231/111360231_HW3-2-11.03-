#include <stdio.h>
#include <stdlib.h>
int hanoi(int n, char A, char B, char C);
int main(void)
{
	int n = 3;
	hanoi(n, '1', '2', '3');

	system("pause");
	return 0;
}

int hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%c��%c\n", A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%c��%c\n", A, C);
		hanoi(n - 1, B, A, C);
	}
}