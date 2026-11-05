#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number whose multiple you don't want to print : ";
  cin>>n;
  for(int i=0;i<=100;i++)
  {
    if(i%n==0)
    {
      continue;
    }
    else{
      cout<<i<<endl;
    }
  }

  return 0;
}