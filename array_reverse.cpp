//
//  array_reverse.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 05/11/22.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of element";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=n-1;
    for(int i=0;i<j; i++,j--){
       int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
