#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number upto which you want to add : ";
  cin>>n;
  int sum=0;
  int i=0;
  do
  {
    i++;
    sum=sum+i;
  } while (i<10);
  cout<<sum;

  return 0;
}