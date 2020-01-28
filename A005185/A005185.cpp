// Hofstadter Q-sequence: a(1) = a(2) = 1; a(n) = a(n-a(n-1)) + a(n-a(n-2)) for n > 2.
// https://oeis.org/A005185

# include <iostream>
# include <vector>
using namespace std;

// Recursive implementation for generating the Hofstadter Q-sequence.
int hof_q_recursive(int n)
{
   if (n <= 2)
   {
      return 1;
   }
   else
   {
      return hof_q_recursive(n - hof_q_recursive(n-1)) + hof_q_recursive(n - hof_q_recursive(n-2));
   }
}

// Bottom-up implementation for generating the Hofstadter Q-sequence.
vector<int> hof_q_bup(int n)
{
   vector<int> mem;
   mem.push_back(0);
   mem.push_back(1);
   mem.push_back(1);
   for (int i = 3; i < n; i++)
   {
      mem[i] = mem[i - mem[i-1]] + mem[i - mem[i-2]];
   }
   return mem;
}

int main(void)
{
   // Printing N numbers from the Q-sequence. The sequence starts at 1
   int N = 30;

   printf("Bottom-up\n");
   vector<int> hofq_sq = hof_q_bup(N);
   for (int i = 1; i < N; i++)
   {
      printf("%d ", hofq_sq[i]);
   }
   printf("\n");

   printf("Recursive\n");
   for (int i = 1; i < N; i++)
   {
      printf("%d ", hof_q_recursive(i));
   }
   printf("\n");
}
