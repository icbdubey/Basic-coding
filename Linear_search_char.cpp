#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  getline(cin,s);
  char search;
  cin>>search;
  bool flag = false;
  for(int i=0; i<s.length(); i++){
    if(s[i]==search){
      cout<<search<<" is present at "<<i+1<<endl;
      flag = true;
    }
  }
  if(flag == false)
{
  cout<<"letter is not presnt";
}
  return 0;
}
