#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int bin;
  cout<<"Enter the binary number : ";
  cin>>bin;
  int dec=0;
  int rem;
  int temp=bin;
  int digit=0;
  while(temp!=0)
  {
    digit++;
    temp=temp/10;
  }
  while(bin!=0)
  {
    digit--;
    rem=bin%10;
    dec=rem*pow(2,digit)+dec;
    bin=bin/10;
  }
  cout<<"The Decimal Number is : "<<dec;
  return 0;
  
}