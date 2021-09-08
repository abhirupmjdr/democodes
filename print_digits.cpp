#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int unit,ten,thou;
    unit = n % 10;
    n=n/10; 
    ten= n%10;
    n=n/10;
    thou=n;
    cout << unit << " " << ten << " " << thou << "\n" ;

}