#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ct=0;
    while(n--){
        int inp;
        cin >> inp;
        if(inp==0){
             ct++;
            }
        else{
            cout << inp << " ";
        } 
    }


    while(ct--) 
        cout << 0 << " ";
}
