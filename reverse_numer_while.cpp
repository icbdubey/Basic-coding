#include <iostream>
using namespace std;

int main() {
    int n, reNum = 0, rem;
    cin >> n;

    while(n != 0) {
        rem = n%10;
        reNum = reNum*10 + rem;
        n /= 10;
    }

    cout << reNum;
}
