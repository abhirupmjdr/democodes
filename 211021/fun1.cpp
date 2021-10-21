#include<bits/stdc++.h>
using namespace std;

long long int facto(int n){
    long long int ans=1;
    for(int i=1; i<=n; i++){
        ans*=i;
    }
    cout << ans << " ";
    return 0;
}



int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++) cin >> arr[i]; // input for
    for(int i = 0; i < n; i++){ // output for
        facto(arr[i]);
    }

} 