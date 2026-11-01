#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cout<<"Enter value of 1st number : ";
  cin>>a;
  cout<<"Enter value of 2nd number : ";
  cin>>b;
  cout<<"Enter value of 3rd number : ";
  cin>>c;
  if(a>b&&a>c)
  {
    cout<<"1st number is the greatest !!";
  }
  else
  {
    if(b>c)
    {
      cout<<"2nd number is the greatest !!";
    }
    else
    {
      cout<<"3rd number is the greatest !!";
    }
  }

  return 0;
}