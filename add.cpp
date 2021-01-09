#include<iostream>
using namespace std;

// takes something ,return nothing because of void
  int add(int a,int b){
      return (a+b);
    }
    void add(){
      int c,d;
      cin>>c;
      cin>>d;
      cout<<(c+d)<<endl;
    }
int main(){

  int a,b;
  cin>>a;
  cin>>b;
  //int sum = add(a,b);
  cout << add(a+b) << '\n';
  add();
  float e = 3.14;
  float f = 1.414;
  add(e,f);
//  std::cout << a+b << '\n';


  return 0;
}
