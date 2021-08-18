// https://prepinsta.com/java-program/program-to-find-the-sum-of-first-n-natural-numbers-in-java/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans=0;
    // cout << (n*(n+1))/2 << endl;
    for(int i=1;i<=n;i++) ans+=i;
    cout << ans << endl;
}