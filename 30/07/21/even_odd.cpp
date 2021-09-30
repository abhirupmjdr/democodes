#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(i%2) odd=odd+arr[i];
        else even=even+arr[i];
    }
    cout << abs(even-odd);
}
