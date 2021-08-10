#include<iostream>
#include<climits>
using namespace std;

int main(){
  int input;
  cout<<"Eter How many input you want : ";
  cin>>input;
  int a[1000];

  for(int i=0; i<input; i++){
    cin>>a[i];
  }
  int largest = INT_MIN;
  int smallest =INT_MAX;

  for(int i=0; i<input; i++){
    if(a[i] > largest){
      largest = a[i];
    }
    if(a[i]<smallest){
      smallest = a[i];
    }
  }
  cout<<"   Smallest  "<<smallest;
  cout<<"    Largest  "<<largest;
  return 0;
}
