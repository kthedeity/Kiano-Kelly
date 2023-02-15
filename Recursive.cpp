// Kiano Kelly 
// Program that contains a recursive function name factorial which calculates and returns the factorial of n (n!)
#include <iostream>
using namespace std;
//calculating factorial
int factorialfinder (int n)
{
  if (n==1)
   return 1;
  else
   return n*factorialfinder (n-1);
}
int main()
{
  // read in
  int n;
  cout << " Enter a number please " << endl;
  scanf("%d",&n);
  cout << factorialfinder(n);

  return 0;
}
