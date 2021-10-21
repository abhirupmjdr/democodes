#include "bits/stdc++.h"
using namespace std;


int main(){
    string s;
    getline(std::cin, s);
    /* int ans=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a') ans++;
    }
    cout << s.size()-ans << endl; */

   // s+='a'; // addition
    // lexographical order
    sort(s.begin(), s.end(),greater<int>());
    cout << s << endl;
}