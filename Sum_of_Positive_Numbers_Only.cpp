// Sum of Positive Numbers Only
#include<iostream>
using namespace std;
int main()
{

  int number;
  int sum=0;
  cout<<"enter the number ";
  cin>>number;

  while(number>=0)
  {
    sum=sum+number;
    cout<<"Enter the number again ";
    cin>>number;

  }
  cout<<"this is your sum"<<sum<<endl;
  return 0;
}
