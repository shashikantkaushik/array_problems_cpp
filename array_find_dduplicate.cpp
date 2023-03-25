//
//  array_find_dduplicate.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 05/11/22.
//
#include<iostream>
using namespace std;
int main(){
    int n;
    bool found=false;
    cout<<"enter number of element";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            found=false;
            if(arr[i]==arr[j] && i!=j){
                    cout<<arr[i]<<endl;
                found=true;
                
           }
        }
        if(found==true) break;
        }
            }
