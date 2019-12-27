// Lucas numbers beginning at 2: L(n) = L(n-1) + L(n-2), L(0) = 2, L(1) = 1.
// https://oeis.org/A000032

# include <iostream>
# include <vector>
using namespace std;

// Algorithm to print the first n Lucas numbers with recursion.
int Lucas_recursive(int n)
{
   if (n == 0)
   {
      return 2;
   }
   if (n == 1)
   {
      return 1;
   }
   else
   {
      return Lucas_recursive(n-1) + Lucas_recursive(n-2);
   }
}

// Algorithm to print the first n Lucas numbers with a bottom-up approach.
vector<int> Lucas_bu(int n)
{
   vector<int> bottom_up;
   bottom_up.push_back(2);
   bottom_up.push_back(1);
   for (int i = 2; i < n; i++)
   {
      bottom_up.push_back(bottom_up[i-1] + bottom_up[i-2]);
   }
   return bottom_up;
}

int main()
{
   // Printing function outputs.
   cout << "Bottom-up\n";
   vector<int> x = Lucas_bu(30);
   for (int i = 0; i < 30; i++)
   {
      cout << x[i] << " ";
   }
   cout << "\n";

   cout << "Recursive\n";
   for (int i = 0; i < 30; i++)
   {
      cout << Lucas_recursive(i) << " ";
   }
   cout << "\n";
}
