#include <iostream>
using namespace std;

int main()
{
  int n;
  int f = 1;
  cout << "Enter the number whose factorial you want : ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    f = f * i;
  }
  cout << "The factorial of the number is  : " << f;
  return 0;
}