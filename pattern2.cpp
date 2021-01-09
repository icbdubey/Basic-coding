#include<iostream>
using namespace std;
int main()
{
int input;
cout << "Enter number of rows: ";
cin >> input;
for(int i = 1; i <=input; i++){
          //for loop for displaying space
          for( int j = i; j<input; j++){
            cout << " ";
          }
//for loop to display star equal to row number
for(int k=1; k<=i; k++){
  cout << "*";
  }
// ending line after each row
cout << "\n";
}
return 0;
}
