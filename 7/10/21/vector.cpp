#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n,10);
    int m;
    cin >> m;
    for(int i=1;i<=m;i++){
        v.emplace_back(-5);
    }
    /* int s=v.size();
    for(int i=0;i<s;i++){  -> for loop
        cout << v[i] << " ";
    } */
    for(int el: v){ // for-each loop
        cout << el << " ";
    }
}