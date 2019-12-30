// Pascal's triangle read by rows: C(n,k) = binomial(n,k) = n!/(k!*(n-k)!), 0 <= k <= n.
// https://oeis.org/A007318

# include <iostream>
# include <vector>
using namespace std;

// Algorithm to calculate Pascal's numbers given the number of rows (n),
// and returns a matrix (pm) with the 'triangles' rows and columns.
vector< vector<int> > pascal(int n)
{
   // Initializes a vector matrix (pm).
   int i = 1;
   vector< vector<int> > pm;
   while (i <= n)
   {
      // Adds the columns to the matrix (pm), each row has an increasing number of columns and they are initialized with the value 1.
      vector<int> pm_temp;
      for (int x = 0; x < i; x++)
      {
         pm_temp.push_back(1);
      }
      // Implements the addition of two pairs of numbers.
      if (i >= 3)
      {
         for (int j = 1; j < pm_temp.size() - 1; j++)
         {
            pm_temp[j] = pm[i-2][j-1] + pm[i-2][j];
         }
      }
      pm.push_back(pm_temp);
      i += 1;
   }
   return pm;
}


int main()
{
   // Prints out the 10 rows of Pascal's triangle
   int N = 10;
   vector< vector<int> > out = pascal(N);
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < out[i].size(); j++)
      {
         cout << out[i][j] << " ";
      }
   }
   cout << "\n";
}
