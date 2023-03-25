//
//  print_substring.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 19/12/22.
//

#include <iostream>
using namespace std;

void substring(char s[]){
    for(int i=0;i<strlen(s);i++){
        for(int j=0;j<=i;j++){
            for(int j=i;j<=strlen(s);j++){
                cout<<s[j];
            }
        }
       
        
        cout<<endl;
    }
}

void subString(char str[], int n)
{
    for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            for (int k = i; k <= j; k++)
                cout << str[k];
             cout << endl;
        }
    }
}


int main(){
    char s[100];
    cout<<"enter string";
    cin>>s;
    substring(s);
}
