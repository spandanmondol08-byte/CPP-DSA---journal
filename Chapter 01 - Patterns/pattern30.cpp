#include <iostream>
using namespace std;

int main() {
  int n;
  int row,col;
  cout<<"Enter the number of rows : ";
  cin>>n;
  int size = 2*n-1;
  for(int i=0;i<size;i++)
  {
    if(i<n)
    {
      row=n-i;
    }
    else
    {
      row=i-n+2;
    }
    for(int j=0;j<size;j++)
    {
      if(j<n)
      {
        col=n-j;
      }
      else
      {
        col=j-n+2;
      }
      if(row>col)
      {
        cout<<row<<" ";
      }
      else
      {
        cout<<col<<" ";
      }
    }
    cout<<endl;
  }

  return 0;
}