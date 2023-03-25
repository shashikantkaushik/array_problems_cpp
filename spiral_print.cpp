//
//  spiral_print.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 20/12/22.
//

#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter row and column no"<<endl;
    cin>>m>>n;
    int arr[m][n];
    cout<<"enter the data"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //print
    int i,j;
    int count=0;
    int rs=0;
    int re=m-1;
    int cs=0;
    int ce=n-1;
    for(;count<m*n;){
        for(i=cs;i<=ce;i++){
            cout<<arr[rs][i]<<" ";
            
            count++;
        }rs++;
        
        for(j=rs;j<=re;j++){
            cout<<arr[j][ce]<<" ";
            
            count++;
        }ce--;
        if(rs<=re){
            for(i=ce;i>=cs;i--){
                cout<<arr[re][i]<<" ";
                count++;
                
            }re--;
        }
        if(cs<=ce){
            for(j=re;j>=rs;j--){
                cout<<arr[j][cs]<<" ";
                count++;
                
            }cs++;
        }
    }
    
}
