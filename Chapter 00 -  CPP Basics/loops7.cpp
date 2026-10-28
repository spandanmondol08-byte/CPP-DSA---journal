#include <iostream>
using namespace std;

int main() {
  int a=0,b=1;
  int n;
  cout<<"Enter the number of terms you want : ";
  cin>>n;
  cout<<a<<"\n"<<b<<"\n";
  for(int i=0;i<n-2;i++)
  {
    int c=a+b;
    a=b;
    b=c;
    cout<<b<<"\n";
  }

  return 0;
}