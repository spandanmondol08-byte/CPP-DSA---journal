#include <iostream>
using namespace std;

int prime(int n)
{
  int c=0;
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
    c++;
  }
  if(c==1)
  {
    return 1;
  }
  else{
    return 0;
  }
}

int main() {
  int n;
  cout<<"Enter the number to check :";
  cin>>n;
  if(n==0)
  {
    cout<<"0 is neither Prime nor Composite !!!";
  }
  else if(prime(n))
  {
    cout<<"It's a Prime Number !!!";
  }
  else
  {
    cout<<"It's a Composite Number!!!";
  }

  return 0;
}