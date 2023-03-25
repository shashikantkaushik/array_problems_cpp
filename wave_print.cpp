//
//  wave_print.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 20/12/22.
//

#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of row and column"<<endl;
    cin>>m>>n;
    int arr[m][n];
    //input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //
    for(int i=0;i<n;i++){
        if(i%2==0 ||i==0){
            for(int j=0;j<m;j++){
                cout<<arr[j][i]<<" ";
            }
           
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
           
        }
    }
}
