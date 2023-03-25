//
//  merge_2_sort_array.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 07/11/22.
//

#include<iostream>
using namespace std;
void Merge(int arr[],int brr[],int crr[],int n, int m,int p){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        
        if(arr[i]<brr[j]){
            crr[k]=arr[i];
            i++;
            k++;
       
        }
        else{
            crr[k]=brr[j];
            j++;
            k++;
       
        }
    }
    while(i<n){
    crr[k]=arr[i];
        i++;
        k++;
            }
                while(j<m){
                    crr[k]=brr[j];
                    j++;
                    k++;
                }
       }
int main(){
    int n,m;
    cout<<"enter n of 1";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<"enter m of 2";
    cin>>m;
    int brr[m];
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    
    int p=n+m;
    int crr[p];
    Merge(arr,brr,crr,n,m,p);
    for(int i=0;i<p;i++){
        cout<<crr[i]<<" ";
    }
}
