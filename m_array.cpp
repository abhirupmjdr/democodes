#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        // if(arr[i] < ans) ans=arr[i];
        ans=min(arr[i],ans);
    }
    cout << ans;
}