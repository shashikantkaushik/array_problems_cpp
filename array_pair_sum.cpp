//
//  array_pair_sum.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 05/11/22.
//

#include<iostream>
using namespace std;
int main(){
    int n,sum,count=0;
    cout<<"enter number";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter sum";
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==sum && i!=j){
                count++;
               
            }
           
        }
    }
    cout<<count<<endl;
}
