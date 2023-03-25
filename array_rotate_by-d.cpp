//
//  array_rotate_by-d.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 08/11/22.
//

#include<iostream>
using namespace std;
void rotateArray(int arr[],int n,int d){
    int brr[d];
    for(int i=0;i<d;i++){
        brr[i]=arr[i];
    }
    for(int i=0;i<n-2;i++){
        arr[i]=arr[i+d];
    }
    int k=d;
    for(int i=0;i<d;i++){
        arr[n+i-2]=brr[i];
        k--;
    }
}
int main(){
    int n,d;
    cout<<"Enter n";
    cin>>n;
    int arr[n];
    cout<<"enter element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter d";
    cin>>d;
    rotateArray(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
