#include<iostream>
using namespace std;
int main()
{
  long int input;
  cin>>input;
  for(int i=input; i>=1; i--){
      for(int j=input; j>=i;j--){
        cout<<"*";
      }
      cout<<endl;
  }
for(int i=1; i<=input; i++){
    for(int j=input; j>=i; j--){
      cout<<"*";
    }
    cout<<endl;
}
  return 0;
}
