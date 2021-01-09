#include<iostream>
using namespace std;
int main()
{
  long int input;
  cin>>input;
  for(long int i=1; i<=input; i++){
      for(long int j=1; j<=i;j++){
        cout<<"*";
      }
      cout<<endl;
  }
for(long int i=input; i>=1; i--){
    for(long int j=1; j<=i; j++){
      cout<<"*";
    }
    cout<<endl;
}
  return 0;
}
