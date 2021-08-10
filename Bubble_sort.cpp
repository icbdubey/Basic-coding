#include<iostream>
using namespace std;

//selection sort
void bubble_sort(int a[], int n){

  //n-1 large elements to the defined
  for(int i=1; i<=n-1; i++){

    //Pairwise swapping in the unsorted of the array
    for(int j=0; j<(n-i); j++){
      if(a[j] > a[j+1]){
        swap(a[j], a[j+1]);
      }
    }
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
  bubble_sort(a,n);

  for(int i=0; i<n; i++){
    cout<<a[i]<<",";
  }
  return 0;
}
