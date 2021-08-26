#include<bits/stdc++.h>
using namespace std;

void elements(int arr[], int n){
  int i=0, j=n-1;

  while(i<j){
    if(arr[i]>0){
        i++;
    }
    else{
    swap(arr[i],arr[j]);
    j--;
  }
  }
}


int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  elements(arr,n);
  for(int i=0; i<n; i++)
  cout<<" "<<arr[i];
}
