// Lower Wythoff sequence (a Beatty sequence): a(n) = floor(n*phi), where phi = (1+sqrt(5))/2
// https://oeis.org/A000201

# include <stdio.h>
# include <math.h>

// Lower Whytoff sequence function
int why_s(int n)
{
	return floor(n * ((1 + sqrt(5))/2));
}

// Printing first 30 numbers in A000201.
int main(void)
{
	for (int i = 1; i <= 30; i++)
	{
		printf("%d ", why_s(i));
	}
	printf("\n");
}


