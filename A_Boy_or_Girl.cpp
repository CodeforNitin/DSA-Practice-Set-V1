#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    set<char>res;

    for(auto x:s){
        res.insert(x);
    }

    if ((res.size()%2)==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;



    //optimum solution 
    /*
    string s;
    cin >> s;

    bool seen[26] = {0};  // all letters initially unseen
    int count = 0;

    for (char c : s) {
        int idx = c - 'a';
        if (!seen[idx]) {
            seen[idx] = true;
            count++;
        }
    }

    if (count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    */

    return 0;
}