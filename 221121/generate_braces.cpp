#include "bits/stdc++.h"
using namespace std;

void gen(int open, int close, int n, std::string out) {
    if(close == n){
        cout << out << endl;
        return;
    }   
    if(open < n){
        gen(open+1,close,n,out+"(");
    }
    if(close < open){
        gen(open,close+1,n,out+")");
    }
}

int main(){
    int n;
    cin >> n;
    gen(0,0,n,"");
}