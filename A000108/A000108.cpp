// Catalan numbers: C(n) = binomial(2n,n)/(n+1) = (2n)!/(n!(n+1)!). Also called Segner numbers.
// https://oeis.org/A000108

# include <iostream>
# include <vector>
using namespace std;

// Recursive implementation for generating catalan numbers.
int catalan_recursive(int n)
{
   if (n <= 1)
   {
      return 1;
   }
   else
   {
      int sum_f = 0;
      for (int k = 0; k < n; k++)
      {
         sum_f += catalan_recursive(k) * catalan_recursive(n-k-1);
      }
      return sum_f;
   }
}

// Bottom-up implementation for generating catalan numbers.
vector<int> catalan_bottom_up(int n)
{
   vector<int> b_up;
   b_up.push_back(1);
   b_up.push_back(1);
   for (int i = 2; i < n; i++)
   {
      int sum_f = 0;
      for (int k = 0; k < i; k++)
      {
         sum_f += b_up[k] * b_up[i-k-1];
      }
      b_up.push_back(sum_f);
   }
   return b_up;
}


int main()
{
   int N = 15;
   // Printing N catalan numbers using both approaches.
   for (int i = 0; i < N; i++)
   {
      cout << catalan_recursive(i) << " ";
   }
   cout << '\n';
   vector<int> cc_b = catalan_bottom_up(N);
   for (int i = 0; i < N; i++)
   {
      cout << cc_b[i] << " ";
   }
   cout << '\n';
}
