#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt=0;

int coins[] = {100, 20, 10, 5, 1};  // descending denominations

    for (int c : coins) {
        cnt += n / c;   // take as many c-coins as possible
        n = n % c;      // remaining amount
    }

    cout << cnt;
    return 0;
}