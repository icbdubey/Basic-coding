#include<iostream>
using namespace std;
int main()
{
  int input;
  cin>>input;
  for(int i=1; i<=input; i++){
        for(int j=i; j<input; j++){
            cout<<" ";
        }
  for(int k=1; k<=(2*i-1); k++){
    cout<<"*";
  }
  cout<<endl;
}
for(int i = input; i >=1; i--){
          //for loop for displaying space
          for( int j = i; j<input; j++){
            cout << " ";
          }
//for loop to display star equal to row number
for(int k=1; k<=(2*i-1); k++){
  cout << "*";
  }
// ending line after each row
cout << "\n";
}
  return 0;
}
