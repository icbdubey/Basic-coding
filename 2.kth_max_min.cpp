#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr, arr+n);
  int k;
  cin>>k;
  cout<<"kth max is"<<arr[n-k]<<endl;
  cout<<"kth min is"<<arr[k-1]<<endl;
}
