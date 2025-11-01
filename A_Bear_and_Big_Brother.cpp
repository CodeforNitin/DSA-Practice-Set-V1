#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(a<=b){
        //cout<<"current a is "<<a<<endl;
        //cout<<"current b is "<<b<<endl;
        a=a*3;
        b=b*2;
        cnt++;
        //cout<<"current count is "<<cnt<<endl;
    }
    cout<<cnt;
    return 0;
}