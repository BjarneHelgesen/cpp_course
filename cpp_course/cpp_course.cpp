#include <cstdio>


// Lag 
// fibinacci-serie (1,1,2,3,5,8,13,21...
// min og max
// lag modulus, (allerede % i C)
// lag funksjon som skriver ut bitmønsteret i parmeteren. 
// 

int add(int a, int b)
{
	return a + b;
}

int calculate(int a, int b)
{
	if (b == 0)
		return 0;

	int x = (a << (2 + 5*2 - ++a*2 + a)) | b;
	return x / b;
}


void main()
{
	int sum = add(10, 20);
	printf("%d", sum);
}



