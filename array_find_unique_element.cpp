//
//  array_find_unique_element.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 05/11/22.
//

#include<iostream>
using namespace std;
int main(){
    int n;
    bool equal;
    cout<<"enter number of element";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       
        for(int j=0;j<n;j++){
            equal=false;
            if(i==j){
                
                continue;
            }
           else if(arr[i]==arr[j]){
               equal=true;
               break;
            }
            
        }
        if(equal==false){
            cout<<arr[i]<<endl;
            break;
        }
    }
}
