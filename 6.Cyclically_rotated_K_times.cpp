#include<bits/stdc++.h>
using namespace std;

void cyclically(int arr[], int n,int k){
  k = k % n;
  for(int i=0; i<n; i++){
    if(i<k){
      cout<<arr[n + i - k]<<" ";
    }
    else{
      cout<<(arr[i - k])<<" ";
    }
  }
  cout<<" ";
}

int main(){
  int n,k;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cin>>k;
  cyclically(arr,n,k);

}
