#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  int c=0;
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
    {
      c++;
    }
  }
  if(c==1)
  {
    cout<<"The number is Prime!!";
  }
  else
  {
    cout<<"The number is composite!!";
  }

  return 0;
}