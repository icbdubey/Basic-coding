#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,p;
  cin>>n;
  p=n;
  int reverse=0;
  while(n !=0){
    int lastdigit=n %10;
    reverse = reverse *10 + lastdigit;
    n=n/10;
  }
  cout<<reverse;
  if(reverse==p){
    cout<<"pallindrom";
  }
  else{
    cout<<"not pallindrom";
  }
}
