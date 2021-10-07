//link-> https://leetcode.com/problems/palindrome-number/submissions/
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        string s=to_string(x);
        string s1=s;
        reverse(s1.begin(),s1.end());
        return (s1==s) ? 1 : 0;
}

bool isPalindrome(int x) {
        string s=to_string(x);
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]) return 0;
            i++,j--;
        }
        return 1;
}