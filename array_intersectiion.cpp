//
//  array_intersectiion.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 05/11/22.
//

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no first of element";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter no  2ndof element";
    cin>>m;
    int brr[m];
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==brr[j]){
                cout<<arr[i]<<endl;
                brr[j]=INT_MIN;
                break;
            }
           
        }
    }
}
