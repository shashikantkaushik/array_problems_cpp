//
//  remove_character.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 20/12/22.
//

#include <iostream>
using namespace std;
int main(){
    char s[100];
    cout<<"enter string"<<endl;
    cin>>s;
    cout<<"enter char"<<endl;
    char c;
    cin>>c;
    int j=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==c){
            continue;
        }
        else{
            s[j]=s[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){
        cout<<s[i];
    }
}
