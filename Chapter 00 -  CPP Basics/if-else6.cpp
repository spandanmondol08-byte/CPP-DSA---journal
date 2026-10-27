#include <iostream>
using namespace std;

int main() {
  int a;
  cout<<"Enter the number : ";
  cin>>a;
  if(a>0)
  {
    cout<<"Positive"; 
  }
  else if(a<0)
  {
    cout<<"Negative";
  }
  else
  {
    cout<<"The number is zero";
  }

  return 0;
}