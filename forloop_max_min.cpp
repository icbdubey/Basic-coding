#include<bits/stdc++.h>
using namespace std;
int main()
{
int min = INT_MAX ;//INT_MAX, +infinity ka kaam kar raha hai
int max = INT_MIN ;//INT_MIN, -infinity ka kaam kar raha hai
int input , value;

cout<<"how many numbers you want to compare: ";
cin>>input;

for(int i = 1 ; i<=input ; i++){
//P.S. 1000 and 0 is taken for explanation purposes, means +infinity and -infinity.
  cin>>value;
  if(min>value){//1000>100, 100>200, 100>300
    min=value;//min=100, min=100, min=100
  }
  if(max<value){//0<100, 100<200, 200<300
    max=value;//max=100, max=200, max=300
  }
}
cout<<"the minimum value is: "<<min<<endl;
cout<<"the maximun value is: "<<max<<endl;

return 0;
}
