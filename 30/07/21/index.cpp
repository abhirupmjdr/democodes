#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int ans=INT_MIN;
    if(n==1) cout << "0" ;
    else{
        for(int i=0;i<n-1;i++){
            ans=max(ans,arr[i+1]-arr[i]);
        }
        cout << ans;
    } 

}