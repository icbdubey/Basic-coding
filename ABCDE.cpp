#include<iostream>
using namespace std;

void pattern(int n){

  for(int i=n; i>-1; i--){
  //  int condition = n-i + 1;
    char alphabet = 'A';

    for(int j=1; j<=i; j++){
      cout<<alphabet;
      alphabet = alphabet + 1;
    }
    cout<<endl;
  }
}
int main(){

  int n;
  cin>>n;
  pattern(n);

  return 0;
}
