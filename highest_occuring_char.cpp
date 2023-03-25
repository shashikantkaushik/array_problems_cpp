//
//  highest_occuring_char.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 20/12/22.
//

#include <iostream>
using namespace std;
int main(){
    char s[100];
    int arr[256]={0};
    cout<<"enter string"<<endl;
    cin>>s;
    
    int n;
    for(int i=0;i<strlen(s);i++){
        n=s[i];
        arr[n]++;
    }
    
    int max=-999;
    char mchar=s[0];
    for(int i=0;i<256;i++){
        if(max<arr[i]){
            max=arr[i];
            mchar=i;
        }
    }
    cout<<mchar<<endl;
    
}
