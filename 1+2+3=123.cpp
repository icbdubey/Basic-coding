#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  //initialisation
  int sum=0;

  //stopping criteria
  while(n>0)
  {
    int last_digit = n%10;
    sum = sum + last_digit;

  //update statement
    n=n/10;
  }
  //print the answer
  cout<<"sum of digits is "<<sum<<endl;
  return 0;
}
