//
//  array_sum.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 05/11/22.
//

#include<iostream>
using namespace std;
int main(){
    cout<<"enter size of aaray";
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
    
}
