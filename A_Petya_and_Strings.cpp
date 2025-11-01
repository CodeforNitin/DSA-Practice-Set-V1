#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

    string a,b;
    cin>>a>>b;

    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);

    int n = a.size();//or b.size since both of same size
    int x;
    for(int i=0;i<n;i++){
        //cout<<"Current a is "<<a.at(i)<<" "<<"current b is "<<b.at(i)<<endl;
        x = (a.at(i) - b.at(i));
        if (x!=0) break;
        //cout<<"current x is "<<x<<endl;
    }
    if (x==0) cout<<0<<endl;
    else if (x!=0 && x<1) cout<<-1<<endl;    
    else cout<<1<<endl;
    
    return 0;
}