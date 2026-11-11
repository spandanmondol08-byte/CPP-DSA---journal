#include <iostream>
using namespace std;
void swap(int &x,int &y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
}
int main() {
  int a,b;
  cout<<"Enter the First number : ";
  cin>>a;
  cout<<"Enter the second number : ";
  cin>>b;
  swap(a,b);
  cout<<"a is : "<<a<<endl<<"b is :"<<b;

  return 0;
}