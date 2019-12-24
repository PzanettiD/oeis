# include <iostream>
using namespace std;

int T(int n)
{
   return (n * (n + 1))/2;
}

int main()
{
   cout << "n*(n+1)/2 algotithm\n";
   for (int i = 0; i < 30; i++)
   {
      cout << T(i) << " ";
   }
   cout << "\n";
}

