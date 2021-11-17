#include"bits/stdc++.h"
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0;i<n;i++){
        cin >> arr[i]; 
    }
   int ct0=0,ct1=0,ct2=0;
   for(int el: arr){
        if(el==0) ct0++;
        else if (el==1) ct1++;
        else ct2++;
   }
   int i=0;
   while(ct0--){
       arr[i]=0;
       i++;
   }
   while(ct1--){
       arr[i]=1;
       i++;
   }
   while(ct2--){
       arr[i]=2;
       i++;
   }
   for(int el: arr){
       cout << el << " ";
   }

    
}