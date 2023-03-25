//
//  check_palindrome.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 17/12/22.

#include <iostream>
using namespace std;


int length(char string[]){
   int count=0;
    for(int i=0;string[i]!='\0';i++){
        count++;
    }
    return count;
}


bool check(char string[]){
    bool check=true;
    int n=length(string);
    for(int i=0;string[i]!='\0';i++){
        n--;
        if(string[i]==string[n]){
            continue;
        }
        else
            check=false;
            break;
    }
   
    return check;
}



int main(){
    int result;
    char s[100];
    cout<<"enter the string "<<endl;
    cin>>s;
    result=check(s);
    if(result==1){
        cout<<"true";
    }
    else
        cout<<"false"<<endl;
    
    
}
