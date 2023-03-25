//
//  reverse_word_wise.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 19/12/22.
//

#include <iostream>
using namespace std;

int length(char s[]){
    int len=0;
    for(int i=0; s[i]!='\0'; i++){
        len++;
    }
    return len;
}

void reverse(char s[]){
    int len=length(s);
    for(int i=0,j=len-1; i<j;i++,j--){
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
  
    for(int i=0,j=0;i<=len;i++){
        
        if(s[i]==' ' || s[i]=='\0'){
            int k=i-1;
            for(;j<=k;j++,k--){
                int temp=s[j];
                s[j]=s[k];
                s[k]=temp;
            }
            s[i]=' ';
            j=i+1;
        }
    }
    cout<<s;
}
int main(){
    char s[100];
    cout<<"enter string of words to reverse word only"<<endl;
    cin.getline(s, 100);
    reverse(s);
}
