//
//  check_permutation.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 20/12/22.
//

#include <iostream>
using namespace std;
int main(){
    char s1[100];
    char s2[100];
    int arr[256]={0};
    int n;
    bool ans=true;
    cout<<"Enter a string"<<endl;
    cin>>s1;
    cout<<"enter two string"<<endl;
    cin>>s2;
    int l1=strlen(s1);
    int l2=strlen(s2);
    if(l1!=l2){
        ans=false;
       
    }
    else{
        for(int i=0;i<=l1;i++){
            n=s1[i];
            arr[n]=arr[n]+1;
        }
        for(int i=0;i<=l1;i++){
            n=s2[i];
            arr[n]=arr[n]-1;
        }
        for(int i=0;i<256;i++){
            if(arr[i]!=0){
                ans=false;
                break;
            }
            
        }
    }
    
    if(ans==0){
        cout<<"no";
    }
    else{
        cout<<"yes";
    }
}
