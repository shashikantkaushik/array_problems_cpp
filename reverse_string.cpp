//
//  reverse_string.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 18/12/22.
//

#include<iostream>
using namespace std;

int length(char s[]){
   int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverse(char s[]){
    int len=length(s);
    int i=0;
    int j=len-1;
    for(;i<j;i++,j--){
        int temp= s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    cout<<s;
}

int main(){
    char s[100];
    cout<<"enter string to revese it";
    cin.getline(s, 100);
    reverse(s);
}
