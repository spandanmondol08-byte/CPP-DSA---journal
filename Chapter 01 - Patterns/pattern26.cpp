/*
1        1
12      21
123    321
1234  4321
1234554321
*/
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of rows : ";
  cin >> n;
  int x=65;
  for(int i=0;i<n;i++)
  {
    x=65;
    for (int j=n;j>i;j--)
    {
      char alp = x;
      cout<<" "<<alp<<" ";
      x++;
    }
    cout<<endl;
  }

  return 0;
}