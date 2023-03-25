//
//  clumn_wise_sum.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 19/12/22.
//

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter row and column"<<endl;
    cin>>m;
    cin>>n;
    cout<<"enter element"<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"row wise"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<"column wise"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
  
}
