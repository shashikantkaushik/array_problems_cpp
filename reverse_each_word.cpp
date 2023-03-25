//
//  reverse_each_word.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 20/12/22.
//

#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char s[100];
    cout<<"enter the string";
    cin.getline(s, 100);
    
    int len=strlen(s);
    for(int i=0,j=0;i<=len;i++){
        if(s[i]==' '||s[i]=='\0'){
            for(int k=i-1;j<k;j++,k--)
            {
                int temp=s[k];
                s[k]=s[j];
                s[j]=temp;
            }
            j=i+1;
        }
    }
    cout<<s<<endl;
}
