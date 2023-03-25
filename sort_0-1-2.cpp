//
//  sort_0-1-2.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 10/11/22.
//

#include <iostream>
using namespace std;
void sort(int arr[],int n){
   int j=n-1;
    int s;
    int i=0;
    for( s=0;i<n;i++){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==2){
            j--;
        }
        if(arr[i]==0 && arr[j]==2){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
        
        
    }
    int p=j-s;
    for(int k=0;k<p;k++){
        arr[k]=1;
    }
}
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
