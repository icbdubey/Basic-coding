#include<iostream>
using namespace std;

//insertion sort
void insertion_sort(int a[], int n){

  for(int i=1; i<=n-1; i++){

    int e=a[i];

    //place the current elemet at right position in the sorted part
    int j = i-1;
    while(j>=0 and a[j]>e){
      a[j+1] = a[j];
      j = j-1;
    }
    a[j+1] = e;
  }
}

int main(){
  int n,key;
  cout<<"How many number want to enter ";
  cin>>n;
  int a[1000];

  for(int i = 0; i<n; i++){
    cin>>a[i];
  }

  // user defined function having no return type
  insertion_sort(a,n);

  for(int i=0; i<n; i++){
    cout<<a[i]<<",";
  }
  return 0;
}
