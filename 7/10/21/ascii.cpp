#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    // int n=(int)c;
    // cout << (int)NULL;
    if(c >='a' and c<='z') cout << "lowercase";
    else if(c>='A' and c<='Z') cout << "uppercase";
    else cout << "None";
}