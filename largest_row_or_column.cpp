//
//  largest_row_or_column.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 20/12/22.
//

#include <iostream>
using namespace std;
int main(){
    int t,n,m;
    int colsum=-999;
    int rowsum=-999;
    
    
    int tr,tc;
    int sum,no;
    
    
        cout<<"enter the value of row and colmn"<<endl;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        //row
        for(int i=0;i<n;i++){
            int trowsum=0;
            for(int j=0;j<m;j++){
                trowsum=trowsum+arr[i][j];
            }
            if(trowsum>rowsum){
                rowsum=trowsum;
                tr=i;
            }
        }
    //col
        for(int i=0;i<m;i++){
            int tcolsum=0;
            for(int j=0;j<n;j++){
                tcolsum=tcolsum+arr[j][i];
            }
            if(tcolsum>colsum){
                colsum=tcolsum;
                tc=i;
            }
        }
        
        if(colsum<rowsum){
            sum=rowsum;
            no=tr;
        }
        else{
            sum=colsum;
            no=tc;
        }
        cout<<no<<" "<<sum<<" "<<endl;
    }

