#include <bits/stdc++.h>
using namespace std;

int f(int n){
    //base case
    if(n==0) return 1;
    //Recursion
    int r=f(n-1);
    //self work
    return r*n;
}

int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
}


