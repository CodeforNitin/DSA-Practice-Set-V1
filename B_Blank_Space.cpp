#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_len = 0;
        int current = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                current++;
                if (current > max_len) max_len = current;
            } else {
                current = 0;
            }
        }

        cout << max_len << endl;
    }
    return 0;
}
