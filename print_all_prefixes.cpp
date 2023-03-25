//
//  print_all_prefixes.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 19/12/22.
//

#include <iostream>
#include <cstring>
using namespace std;

void prefix(char s[]){
    for(int i=0;i<strlen(s);i++){
        for(int j=0;j<=i;j++){
            cout<<s[j];
        }
        cout<<endl;
    }
}
int main(){
    char s[100];
    cout<<"enter string to know prefiix"<<endl;
    cin>>s;
    prefix(s);
}
