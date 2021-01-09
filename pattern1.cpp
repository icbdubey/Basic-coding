#include<iostream>
using namespace std;
int main()
{
  cout<<"how many line u want print pattern  ";
  int input,i,j,k;
  cin>>input;

  for( i=0; i<input; i++){//loop for changing line

              for(j=0; j<i; j++){//loop for creating space
              cout<<" ";
            }

        for( k=i; k<input; k++){//loop for printing star
          cout<<"*";
        }
    cout<<endl;
  }
  return 0;
}
/*//////////////////////////////
*****
 ****
  ***
   **
    *
    ////////////////////////////////*/
