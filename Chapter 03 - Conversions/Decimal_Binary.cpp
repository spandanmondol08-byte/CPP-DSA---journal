#include <iostream>
using namespace std;

int main()
{
  int dec;
  cout << "Enter the decimal number : ";
  cin >> dec;
  int bin = 0;
  int rev = 0;
  int rem;
  while (dec != 0)
  {
    rem = dec % 2;
    dec = dec / 2;
    rev = rev * 10 + rem;
  }
  int rem1;
  while (rev != 0)
  {
    rem1 = rev % 10;
    bin = bin * 10 + rem1;
    rev = rev / 10;
  }
  cout << "The binary number is : " << bin;

  return 0;
}