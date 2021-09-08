#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    cin >> m;
    if(n > m){
        cout << "greater: " << n << endl;
    }
    else if(n==m){
        cout << "both are equal" << endl;
    }
    else{
        cout << "greater: " << m << endl;
    }

}