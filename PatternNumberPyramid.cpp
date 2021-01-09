#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  for(int i=1; i<=n; i++){//Loop for rows 1 to n

        for(int space=1; space<=n-i; space++){//loop for spaces
        cout<<" ";
    }
        int val = i;//loop for Incresing number
        for(int cnt=1; cnt<=i; cnt++){
        cout<<val;
        val = val + 1;
    }
        val = val - 2;//loop for Decreasing number
        for(int cnt=1; cnt<=i-1; cnt++){
        cout<<val;
        val = val - 1;
        }
cout<<endl;//print a new line
}

return 0;
}
