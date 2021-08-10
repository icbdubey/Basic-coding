#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"How many numbers want to store in Array "<<endl;
  cin>>n;
  int number[n];

  //store input from user to array
  for(int i=0; i<n;i++){
    cout<<"Enter the number ";
    cin>>number[i];
  }
  cout<<"The number are ";

  //print array elements
  for(int i=0; i<n; i++){
    cout<<number[i]<<" ";
  }
  return 0;
}
