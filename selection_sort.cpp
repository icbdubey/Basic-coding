#include<iostream>
using namespace std;

//selection sort
void selection_sort(int a[], int n){
  for(int i=0; i<n-1; i++){

    //find out the smallest element from unsorted
    int min = i;
    for(int j=i; j<n ; j++){
      if(a[j] < a[min]){
        min = j;
      }
    }
    //After this loop we can do swap finally
    swap(a[i], a[min]);
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
  selection_sort(a,n);

  for(int i=0; i<n; i++){
    cout<<a[i]<<",";
  }
  return 0;
}
