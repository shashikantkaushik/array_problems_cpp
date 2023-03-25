//
//  linearSearch.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 06/11/22.
//



#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
     }
    return -1;
}

int  main(){
    int n,x,index;cout<<"no of element in array";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"item to be searched";
        cin>>x;
     cout<<linearSearch(arr,n,x);
  }
