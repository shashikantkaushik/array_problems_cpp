//
//  array_triplet_sum.cpp
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
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==sum && i!=j!=k){
                    count++;
                   
                }
               
            }
        }
    }
    cout<<count<<endl;
}
