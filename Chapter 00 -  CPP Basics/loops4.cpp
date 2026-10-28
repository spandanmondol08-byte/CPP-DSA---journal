#include <iostream>
using namespace std;

int main() {
  int n;
  int p;
  int mul=1;
  cout<<"Enter the number : ";
  cin>>n;
  cout<<"Enter the power : ";
  cin>>p;
  for(int i=1;i<=p;i++)
  {
    mul=mul*n;
  }
  cout<<"The answer is : "<<mul;

  return 0;
}