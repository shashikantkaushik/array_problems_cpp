//
//  array_sort_0_1.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 05/11/22.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=n-1;
    for(int i=0;i<j;){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if (i < j)
                {
                    arr[i] = 0;
                    arr[j] = 1;
                    i++;
                    j--;
                }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
