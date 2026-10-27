#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number of terms : ";
  cin>>n;
  for(int i=1;i<n+1;i++)
  {
    cout<<i*i<<"\n";
  }

  return 0;
}