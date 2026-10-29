#include <iostream>
using namespace std;

int main() 
{
  int n=5;
  int num=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      num++;
      cout<<" "<<num<<" ";
    }
    cout<<endl;
  }
  return 0;
}
