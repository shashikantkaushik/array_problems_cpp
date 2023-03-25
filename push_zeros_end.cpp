//
//  push_zeros_end.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 08/11/22.
//

#include<iostream>
using namespace std;
void pushZero(int arr[],int n){
    int k=0;
    for(int i=0;k<n;){
        while(arr[i]!=0){
            int temp=arr[k];
            arr[k]=arr[i];
            arr[i]=temp;
            i++;
            k++;
        }
        if(arr[i]==0){
            i++;
        }
        if(i>=n && k<=n){
            arr[k]=0;
            k++;
            
        }
    }
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    cout<<"enter element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pushZero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
