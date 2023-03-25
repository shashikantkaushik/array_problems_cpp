//
//  array_largest_no.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 05/11/22.
//

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,max=INT_MIN;
    cout<<"eneter no of element";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<max<<endl;
}
