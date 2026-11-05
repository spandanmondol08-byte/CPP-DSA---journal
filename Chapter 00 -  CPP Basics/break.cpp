#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number you want to stop at : ";
  cin>>n;
  int i=0;
  while(i<=101)
  {
    if(i==n)
    {
      break;
    }
    cout<<i<<endl;
    i++;
  }

  return 0;
}