#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,cas=1;
    string str1,str2,str3;
    scanf("%d%*c",&t);
    while(t--){
        getline(cin,str1);
        getline(cin,str2);
        str3.clear();
        for(int i=0;i<str1.size();i++){
             char ch = str1[i];
             if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
                 str3 += ch;
         }

        if(str1==str2)
            cout<<"Case "<<cas++<<": Yes"<<endl;
        else if(str3 != str2)
                cout<<"Case "<<cas++<<": Wrong Answer"<<endl;

            else
            cout<<"Case "<<cas++<<": Output Format Error"<<endl;

    }
    return 0;
}

