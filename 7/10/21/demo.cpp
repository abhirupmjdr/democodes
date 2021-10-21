#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    vector<int> v;
    while(true){
        cin >> s;
        if(s[0]=='q') break;
        int num=stoi(s);
        v.push_back(num);
    }
    cout << v.size() << endl;
}