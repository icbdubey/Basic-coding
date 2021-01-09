#include<iostream>
using namespace std;


int main()
{
  int no;
  int n;
  cout<<"How many input u want enter "<<endl;
  cin>>n;


while(n>0){

    cin>>no;

    int p = 1;
    int ans = 0;

    while(no>0) {
        int r = no%10;
        ans = ans + r*p;
        p = p*2;
        no = no/10;
  }
  cout<<ans<<endl;
  n = n - 1;
}
  return 0;
}
/*        output
4           5
101         15
1111        6
00110       63
111111
*/
