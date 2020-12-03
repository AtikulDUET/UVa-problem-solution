#include<bits/stdc++.h>
using namespace std;
int n;
void print(int n,char ch){
    if(ch=='b'){
        for(int i=0;i<n;i++)
            cout<<" ";
    }
    else{
     for(int i=0;i<n;i++)
        cout<<ch;
    }
}
int main()
{
    string str;
    while(getline(cin,str)){
       for(int i=0;str[i]!='\0';i++){
            if(str[i]=='!') cout<<endl;
            else if(str[i]>='0' && str[i]<='9'){
                n+= (str[i]-'0');
            }
            else{
            print(n,str[i]);
            n=0;
            }
       }
       cout<<endl;
    }
    return 0;
}


