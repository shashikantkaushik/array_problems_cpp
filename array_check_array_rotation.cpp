//
//  array_check_array_rotation.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 23/12/22.


#include <iostream>
using namespace std;
int main(){
    int n;
    int result=0;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            result=i+1;
            break;
        }
    }
    cout<<result<<endl;
}
