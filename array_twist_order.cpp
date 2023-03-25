//
//  array_twist_order.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 05/11/22.
//

#include <iostream>
using namespace  std;
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    int e=n-1,s=0;
    for(int val=0;val<n;s++,e--){
      
            cin>>arr[s];
            val++;
        
        if(val<n){
            cin>>arr[e];
            val++;
        }
       
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
