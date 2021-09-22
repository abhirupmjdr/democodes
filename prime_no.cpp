#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int flag =0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }

    if(flag) cout << n <<" is not prime";
    else cout << n << " is prime";
}