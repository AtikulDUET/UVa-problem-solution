#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ck;
    char str[10],c;
    cin>>t;
    while(t--){
        cin>>str;
        ck = 0;
        for(int i=0;str[i]!='\0';i++){
                c = str[i];
            for(char ch='a';ch<='z';ch++){
                str[i] = ch;
                if(!strcmp(str,"one")){
                  if(ck==0)  cout<<"1"<<endl; ck = 1;   break;
                }
                else if(!strcmp(str,"two")){
                   if(ck==0) cout<<"2"<<endl;  ck = 1;  break;
                }
                else if(!strcmp(str,"three")){
                   if(ck==0) cout<<"3"<<endl;  ck =1;  break;
                }
                else if(!strcmp(str,"four")){
                   if(ck==0) cout<<"4"<<endl;  ck = 1;   break;
                }
                else if(!strcmp(str,"five")){
                    if(ck==0)  cout<<"5"<<endl;  ck = 1;  break;
                }
                else if(!strcmp(str,"six")){
                   if(ck==0) cout<<"6"<<endl; ck = 1; break;
                }
                else if(!strcmp(str,"seven")){
                    if(ck==0)  cout<<"7"<<endl; ck = 1;   break;
                }
                else if(!strcmp(str,"eight")){
                   if(ck==0) cout<<"8"<<endl;  ck = 1;  break;
                }
                else if(!strcmp(str,"nine")){
                  if(ck==0)  cout<<"9"<<endl;   ck = 1; break;
                }
                else if(!strcmp(str,"zero")){
                  if(ck==0)  cout<<"0"<<endl; ck = 1;  break;
                }
                else
                    str[i] = c;
            }
        }
    }
    return 0;
}


