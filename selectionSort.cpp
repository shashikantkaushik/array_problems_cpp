//
//  selectionSort.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 06/11/22.
//
#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int min=arr[i];
        int minIndex=i;
        for(int j=i+1;j<n;j++){
          
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    
    }
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
