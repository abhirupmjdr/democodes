#include<bits/stdc++.h>

using namespace std;

void myswap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}


int main(){
    int a,b;
    cin >> a >> b;
    cout << "------before swap-------\n";
    cout << a << " " << b;
    cout << "\n-------after swap--------\n";
    myswap(a,b);
   /*  a=a+b;
    b=a-b;
    a=a-b; */
    cout << a << " " << b;  
}