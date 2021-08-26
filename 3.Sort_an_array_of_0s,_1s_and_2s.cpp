#include<bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n){
  int l=0, m=0, h=n-1;
  while(m <= h){
    if(arr[m]==0){
      swap(arr[m], arr[l]);
      l++;
      m++;
    }
    if(arr[m]==1){
      m++;
    }
    if(arr[m]==2){
      swap(arr[m], arr[h]);
      h--;
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
  arrange(arr,n);
  for(int i=0; i<n; i++){
    cout<<" "<<arr[i];
  }
}
