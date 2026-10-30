#include <iostream>
using namespace std;

int main() {
  int n=5;
  int ch=97;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<i+1;j++)
    {
      char alp = ch+i;
      cout<<" "<<alp<<" ";
    }
    cout<<endl;
  }

  return 0;
}