#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;

int main()
{
    string str,temp,s1,s2;

    while(getline(cin,str,'\n')){

        if(str=="") break;
        else{
            s1 ="",s2 ="";
            int i=0;
            for(;i<str.size();i++){
                if(str[i]==' ') break;
                else
                    s1+=str[i];
            }

          //  cout<<"indx: "<<i<<endl;
        for(int j=i+1;j<str.size();j++)
                s2+=str[j];
            mp[s2] = s1;
        }
    }


   // for(auto v:mp) cout<<v.first<<" "<<v.second<<endl;

    while(cin>>str){

          string temp = mp[str];
        if(temp=="")
            cout<<"eh"<<endl;
        else
            cout<<mp[str]<<endl;
    }
    return 0;
}

