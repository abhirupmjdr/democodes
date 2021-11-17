#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr,arr+n);
    int el=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==el) el++;
        else{
            cout << el << endl;
            return 0;
        }
    }
    cout << el << endl;
    // return 0;

}