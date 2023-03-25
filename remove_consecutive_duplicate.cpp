//
//  remove_consecutive_duplicate.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 20/12/22.
//

#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char s[100];
    cout<<"enter the string"<<endl;
    cin>>s;
    int i=0,j=0;
    int len=strlen(s);
    int lchar=s[i];
   
    for(int i=0;i<len;i++){
        if(s[lchar]!=s[i]){
            s[j]=s[i];
            j++;
            s[lchar]=s[i];
           // cout<<"l"<<s[lchar]<<s[i]<<endl;
        }
    }
   
    for(int i=0;i<j;i++){
        cout<<s[i]<<" ";
    }
}
