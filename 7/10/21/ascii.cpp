#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    // int n=(int)c;
    // cout << (int)NULL;
    // if(c >='a' and c<='z') cout << "lowercase";
    // else if(c>='A' and c<='Z') cout << "uppercase";
    // else cout << "None";
    // int a=(int)c;
    // if(a>=97) cout <<"lowercase";
    // else if(a >=65) cout <<"uppercase";
    // else if(a >=48) cout << "int";

    if(c >='A' and c<='Z') cout << "uppercase";
    if(c >='a' and c <='z') cout << "lowercase";
    if(c>='0' and c<='9') cout << "number";
}