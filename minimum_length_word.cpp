//
//  minimum_length_word.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 21/12/22.
//

#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char s[100];
    cout<<"enter the string"<<endl;
    cin.getline(s, 100);
    int len=strlen(s);
    int minlen=9999;
    char minchar[100];
    for(int i=0,j=0;i<=len;i++){
        if(s[i]==' '||s[i]=='\0'){
            
            if(minlen>i-j){
                minlen=i-j;
                cout<<minlen<<endl;
                for(int k=0;j<i;k++,j++){
                    minchar[k]=s[j];
                }
                
            }
        }
    }
    for(int i=0;i<minlen;i++){
        cout<<minchar[i]<<" ";
    }
}
