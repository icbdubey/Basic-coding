#include <iostream>
using namespace std;

int main()
{
    int input;
    int c=0;

    cout << "Enter number of input: ";
    cin >> input;

    for(int i = 1; i <= input; ++i)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}
