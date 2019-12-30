// Recamán's sequence: a(0) = 0; for n > 0, a(n) = a(n-1) - n if positive and not already in the sequence, otherwise a(n) = a(n-1) + n.
// http://oeis.org/A005132

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

//Function to verify if there is an int (x) in an array (arr) of size (size),
// returs true if there is, false if there is not.
bool inVector(int x, vector<int> vct)
{
   for (int i = 0; i < vct.size(); i++)
   {
      if (x == vct[i])
      {
         return true;
      }
   }
   return false;
}

// Function that returns first (n) numbers in Recaman's sequence,
// as an vector<int> (sequence).
vector<int> rec(int n)
{
   // Declares the vector sequence and initializes its first value to 0 as it is proposed.
   vector<int> sequence;
   sequence.push_back(0);
   for (int i = 1; i < n; i++)
   {
      // Implements the algorithm 'subtract if possible, otherwise add'.
      if (((sequence[i-1] - i) > 0) && (!inVector(sequence[i-1] - i, sequence)))
      {
         sequence.push_back(sequence[i-1] - i);
      }
      else
      {
         sequence.push_back(sequence[i-1] + i);
      }
   }
   return sequence;
}

int main()
{
   // Printing the first N numbers given by rec function.
   int N = 30;
   vector<int> out = rec(N);
   for (int i = 0; i < N; i++)
   {
      cout << out.at(i) << " ";
   }
   cout << "\n";
}
