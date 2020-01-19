// Lower Wythoff sequence (a Beatty sequence): a(n) = floor(n*phi), where phi = (1+sqrt(5))/2
// https://oeis.org/A000201

# include <iostream>
# include <cmath>
using namespace std;

int why_s(int n)
{
	return floor(n * ((1 + sqrt(5))/2));
}


int main()
{
	for (int i = 1; i <= 30; i++)
	{
		cout << why_s(i) << " ";
	}
	cout << "\n";
}

