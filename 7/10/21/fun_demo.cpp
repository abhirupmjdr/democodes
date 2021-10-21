#include <bits/stdc++.h>
using namespace std;

int sum_of(int n=0){
    int ans = 0;
    while(n){
        ans+=(n%10);
        n/=10;
    }
    return ans;
}

int main(){
    int n,m,p;
    cin >> n >> m >> p;
    cout << sum_of(n) << endl;
    cout << sum_of(m) << endl;
    cout << sum_of(p) << endl;
    cout << sum_of() << endl;
}