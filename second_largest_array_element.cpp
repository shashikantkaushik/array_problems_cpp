//
//  second_largest_array_element.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 08/11/22.
//

#include<iostream>
using namespace std;
void secondLargest(int arr[],int n){
   int max=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            int temp=max;
            max=arr[i];
            max2=temp;
        }
        if(max2<arr[i] && arr[i]<max){
            max2=arr[i];
        }
    }
 
    cout<<max2<<" ";
}
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    secondLargest(arr,n);
}
