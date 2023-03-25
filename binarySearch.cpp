//
//  binarySearch.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 06/11/22.
//



#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int x){
    int end=n-1,start=0;
    while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==x){
    return mid;
    }
    else if(arr[mid]>x){
    end=mid-1;
    }
    if(arr[mid]<x){
    start=mid+1;
    } }
 return -1;
    }

int main(){
    int n,x;
    cout<<"Enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter x";
    cin>>x;
    cout<<binarySearch(arr,n,x);
    
}

