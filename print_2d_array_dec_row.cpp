//
//  print_2d_array_dec_row.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 20/12/22.
//

#include <iostream>
using namespace std;
int main(){
    cout<<"enter n row m colmun"<<endl;
    int n,m;
    cin>>n>>m;
    int loop=m;
    int arr[100][100];
    cout<<"enter string";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<loop;j++){
            for(int k=0;k<n;k++){
                cout<<arr[i][k];
            }
            cout<<endl;
        }
    }
}
