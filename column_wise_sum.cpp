//
//  column_wise_sum.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 19/12/22.
//

#include <iostream>
using namespace std;
int main(){
    int m,n;
    
    cout<<"enter m for row and n for column"<<endl;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+arr[j][i];
            
        }
        cout<<sum<<endl;
    }
}
