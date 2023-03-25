//
//  trim_space.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 18/12/22.
//

#include <iostream>
using namespace std;

void trim(char s[])
{
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            continue;
        }
        else{
            s[j]=s[i];
            j++;
        }
        
    }
        s[j]='\0';
    cout<<s;
    }
int main(){
    char s[100];
    cout<<"enter string to remove spaces";
    cin.getline(s,100);
    trim(s);
}

