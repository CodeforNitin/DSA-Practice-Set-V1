#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int last_digit = 0;
    while(t--){
        int n;
        cin>>n;
        while(n){
        last_digit = last_digit + n%10;
        n=n/10;
        }
        cout<<last_digit<<endl;
        last_digit = 0;

    }
    return 0;
}