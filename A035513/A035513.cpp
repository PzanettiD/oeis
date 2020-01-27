// Wythoff array read by antidiagonals.
// https://oeis.org/A035513

# include <iostream>
# include <cmath>
# include <vector>
using namespace std;

// Applying the fibonacci rule in making rows.
vector<int> fib_rule(int num1, int num2, int n)
{
   vector<int> mem;
   mem.push_back(num1 + num2);
   mem.push_back(mem[0] + num2);
   for (int i = 2; i < n; i++)
   {
      mem.push_back(mem[i-1] + mem[i-2]);
   }
   return mem;
}

// Makes the initial two columns necessary to build the sequence.
vector< vector<int> > two_columns(int n)
{
   vector< vector<int> > otp;
   vector<int> first_column;
   for (int i = 0; i < n; i++)
   {
      first_column.push_back(i);
   }
   vector<int> second_column;
   for (int i = 1; i <= n; i++)
   {
      second_column.push_back(floor(i * ((1 + sqrt(5))/2)));
   }
   otp.push_back(first_column);
   otp.push_back(second_column);
   return otp;
}

// Makes a matrix out of the combination of the two columns and the fibonacci rule.
vector< vector<int> > make_warray(int n)
{
   vector< vector<int> > columns_array = two_columns(n);
   vector< vector<int> > mtx;
   for (int i = 0; i < n; i++)
   {
      vector<int> row = fib_rule(columns_array[0][i], columns_array[1][i], n - i);
      mtx.push_back(row);
   }
   return mtx;
}

// Reads the matrix anti-diagonally.
vector<int> anti_d_parser(int n)
{
   vector< vector<int> > mtx = make_warray(n); 
   vector<int> sequence;
   for (int k = 0; k < n; k++)
   {
      int j = k;
      int i = 0;
      while (j >= 0)
      {
         sequence.push_back(mtx[i][j]);
         j -= 1;
         i += 1;
      }
   }
   return sequence;
}

int main()
{
   // Prints the matrix as an array, the number 8 refers to the number of elements of the first row.
   vector<int> otp = anti_d_parser(8);

   // Prints the seqeunce, notice that the number of elements in the array is given by the formula: N + (N - 1) + (N - 2) + ... + 1, where N is the number of elements in the first row.
   for (int i = 0; i < 36; i++)
   {
      cout << otp[i] << ' ';
   }
   cout << '\n';
}
