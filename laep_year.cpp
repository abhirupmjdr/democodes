#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
    cin >> n;
    if(n%4==0 and n%100){
        cout << n <<" is leap year" << endl;
    }else if(n%400==0){
        cout << n <<" is leap year" << endl;
    }else{
        cout << n <<" is not leap year" << endl;

    }
    }
}