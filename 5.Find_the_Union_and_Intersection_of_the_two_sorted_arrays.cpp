#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

//union
void uni(int arr1[],int arr2[], int n1, int n2){
  int i=0,j=0,count=0;
  while (i<n1 && j<n2){
    if(arr1[i] == arr2[j]){
      count++;
      i++;
      j++;
    }
    else if(arr1[i] < arr2[j]){
      count++;
      i++;
    }
    else if(arr1[i] > arr2[j]){
      count++;
      j++;
    }
  }
    while(i<n1){
      count++;
      i++;
    }
    while(j<n2){
      count++;
      j++;
  }
  cout<<count;
}
int main(){
  int n1,n2;
  cin>>n1>>n2;
  int arr1[n1];
  int arr2[n2];
  for(int i=0; i<n1; i++){
    cout<<"arr1 ";
    cin>>arr1[i];
  }
  for(int j=0; j<n2; j++){
    cout<<"arr2 ";
    cin>>arr2[j];
}
uni(arr1,arr2,n1,n2);
}



/*
//union
void uni(int arr1[],int arr2[], int n1, int n2){
  int i=0,j=0;
  while (i<n1 && j<n2){
    if(arr1[i] == arr2[j]){
      cout<<" "<<arr1[i];
      i++;
      j++;
    }
    else if(arr1[i] < arr2[j]){
      cout<<" "<<arr1[i];
      i++;
    }
    else if(arr1[i] > arr2[j]){
      cout<<" "<<arr2[j];
      j++;
    }
  }
    while(i<n1){
      cout<<" "<<arr1[i];
      i++;
    }
    while(j<n2){
      cout<<" "<<arr2[j];
      j++;
  }
}
int main(){
  int n1,n2;
  cin>>n1>>n2;
  int arr1[n1];
  int arr2[n2];
  for(int i=0; i<n1; i++){
    cout<<"arr1 ";
    cin>>arr1[i];
  }
  for(int j=0; j<n2; j++){
    cout<<"arr2 ";
    cin>>arr2[j];
}
uni(arr1,arr2,n1,n2);
}
*/
