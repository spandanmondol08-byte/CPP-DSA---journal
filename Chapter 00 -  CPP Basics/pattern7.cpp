#include <iostream>
using namespace std;

int main() 
{
  int n=5;
  int ch=97;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      char alp=ch+j;
      cout<<" "<<alp<<" ";
    }
    cout<<endl;
  }
  return 0;
}
