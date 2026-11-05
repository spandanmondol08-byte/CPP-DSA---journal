#include <iostream>
using namespace std;

int main() {
  int i=1;
  int n;
  cout<<"Enter the number whose factor u want: ";
  cin>>n;
  while(i<=n)
  {
    if(n%i==0)
    {
      cout<<i<<endl;
    }
    i++;
  }

  return 0;
}