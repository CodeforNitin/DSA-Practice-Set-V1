#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    string s;

    while (n--) {
        cin >> s;
        if (s[1] == '+') cnt++;
        else cnt--;
    }

    cout << cnt << endl;
    return 0;
}
