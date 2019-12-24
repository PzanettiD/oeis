// Fibonacci numbers: F(n) = F(n-1) + F(n-2) with F(0) = 0 and F(1) = 1.
// https://oeis.org/A000045

# include <iostream>
# include <vector>
using namespace std;

// Algorithm to print the first n Fibonacci numbers, using a bottom_up approach
vector<int> fib_b(int n)
{
   vector<int> bottom_up;
   bottom_up.push_back(0);
   bottom_up.push_back(1);
   for (int i = 2; i < n; i++)
   {
      bottom_up.push_back(bottom_up[i - 1] + bottom_up[i - 2]);
   }
   return bottom_up;
}

// Algorithm to print the first n Fibonacci numbers using recursion
int fib_recursive(int n)
{
   if (n == 0)
   {
      return 0;
   }
   if (n == 1)
   {
      return 1;
   }
   else
   {
      return fib_recursive(n - 1) + fib_recursive(n - 2);
   }
}


int main()
{
   // This is just to print the first 30 fibonacci numbers, using fib_b
   cout << "Bottom up\n";
   vector<int> x = fib_b(30);
   for (int i = 0; i < 30; i++)
   {
      cout << x.at(i) << " ";
   } 
   cout << "\n";

   // Using fib_recursive to print the first 30 fibonacci numbers
   cout << "Recursive\n";
   for (int j = 0; j < 30; j++)
   {
      cout << fib_recursive(j) << " ";
   }
   cout << "\n";
}

