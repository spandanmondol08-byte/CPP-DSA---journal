#include <iostream>
using namespace std;

int main() {
  int n;
  int x=65;
  cout<<"Enter the number of rows : ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j =n;j>i;j--)
    {
      cout<<"   ";
    }

    for(int j =0;j<i+1;j++)
    {
      char alp= x+j;
      cout<<" "<<alp<<" ";
    }

    cout<<endl;

  }

  return 0;
}