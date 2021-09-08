#include<iostream>
using namespace std;

void fib(int n){
  int a=-1,b=1,c;
  for(int i=1; i<=n; i++){
    c=a+b;
    cout<<" "<<c;
    a=b;
    b=c;
  }
}

int main(){
  int n;
  cin>>n;
  fib(n);

  return 0;
}
