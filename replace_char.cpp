//
//  replace_char.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 17/12/22.
//

#include <iostream>
using namespace std;

void replace(char s[],char c1,char c2){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c1){
            s[i]=c2;
        }
    }
    cout<<s<<endl;
}


int main(){
    char s[100];
            char c1,c2;
            cout<<"enter the string"<<endl;
            cin>>s;
            cout<<"enter c1 and c2"<<endl;
            cin>>c1>>c2;
            
    replace(s,c1,c2);
}
