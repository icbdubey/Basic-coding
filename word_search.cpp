#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    string s1;
    cin>>s1;
    int pos = s.find(s1);
    cout<<pos+1;
}
