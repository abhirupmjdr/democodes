// article -> https://www.cplusplus.com/reference/vector/vector/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n,-1);
    v.push_back(19);
    cout << v.capacity()<< endl;
    cout << v[18];
    sort(v.begin(),v.end()); // sort
    sort(v.begin(),v.end(),greater<int>()); // sort -dsc
    cout << v.front() << " " << v.back() << endl; // 1st and n-1th ele
    reverse(v.begin(),v.end()); // reverse
}