/* What will be the result below according to the precedence table.

  2*3-48==5/4*6
  6<<2-4*8/2
  5>4<3/2-8%4+5
  14-8+92>>2+70
  
*/
#include <iostream>
using namespace std;

int main()
{
  int n;

  n = 2 * 3 - 48 == 5 / 4 * 6;
  cout << "ans=" << n << endl;

  n = 6 << 2 - 4 * 8 / 2;
  cout << "ans=" << n << endl;

  n = 5 > 4 < 3 / 2 - 8 % 4 + 5;
  cout << "ans=" << n << endl;

  n = 14 - 8 + 92 >> 2 + 70;
  cout << "ans=" << n << endl;
}