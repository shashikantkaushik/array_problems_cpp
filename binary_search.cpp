//
//  binary_search.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 06/11/22.
//

#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int x){
    int e=n-1,s=0;
    for(;s<=e;){
    int mid=(s+e)/2;
    if(arr[mid]==x){
    return mid;
    }
    else if(arr[mid]>x){
    e=mid-1;
    
    }
    if(arr[mid]<x){
    s=mid+1;
    } }
 return -1;
    }

int main(){
    int n,x,s,e;
    cout<<"Enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter x";
    cin>>x;
    cout<<binarySearch(arr,n,x);
    /* s=0;
     e=n-1;
     for(int i=s;s<=e;){
     int mid=(s+e)/2;
     if(arr[mid]==x){
     return mid;
     }
     else if(arr[mid]>x){
     e=mid-1;
     
     }
     if(arr[mid]<x){
     s=mid+1;
     }
     
     
     
     
     }
     cout<<"-1";
     }
     */
}
