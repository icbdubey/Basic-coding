#include<iostream>
using namespace std;

int main(){
  int input, key;
  cout<<"How many numbers want to store in Array ";
  cin>>input;

  int a[1000];
  for(int i=0; i<input; i++){
    cin>>a[i];
  }
  //Ask for the element we want search
  cout<<"Enter the element you want to search : ";
  cin>>key;

  //Find out the index of that elemet by traversing the array
  //Linear search algorithm
  int i;
  for( i=0;i<input; i++){
    if(a[i]==key){
      cout<<key<<" Found at "<<i<<" index";
      break;
    }
  }
  if(i==input){
    cout<<key<<" is not present"<<endl;
  }
  return 0;
}
