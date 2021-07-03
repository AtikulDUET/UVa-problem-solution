#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char ch,temp;
    int ck;
    while(1){
        getline(cin,str);
        ck = 0;
        if(str=="*")
            return 0;
            ch = str[0];
            temp = tolower(ch);
         for(int i=1;i<str.size();i++){
            ch = str[i];

            if(ch==' '){
                    i++;
                ch = tolower(str[i]);

                if(ch==temp);
                else{
                    ck = 1;
                    break;
                }
            }
         }
         if(ck==0)
            cout<<"Y"<<endl;
         else
            cout<<"N"<<endl;
    }
    return 0;
}

