#include<iostream>
using namespace std;

int main() {
    string s = "Striver";
    cout<<s<<endl;
    int len = s.size();
    s[len-1] = 'z';
    cout<<s[2]<<endl;
    cout<<s;
    return 0;
}