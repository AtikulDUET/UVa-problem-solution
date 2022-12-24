#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,ans="";

    char ch;
    vector<string>vec;
    map<string,int>mp;
    while(getline(cin,str,'\n')){
      //  cout<<"ckkk: "<<str<<endl<<endl;

        for(int i=0;i<str.size();i++){
            ch = str[i];

            if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
                if(ch>='A' && ch<='Z')
                    ch = ch-'A' + 'a';
                ans += ch;
            }

            else{
                if(ans.size()>0)
                    vec.push_back(ans);
                ans="";
            }
        }
      //  cout<<"temp: "<<ans<<endl;
        if(ans.size()>0&& (ans[0]>='a'&&ans[0]<='z'))
            vec.push_back(ans);
        ans = "";
    }



   // cout<<"Size: "<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
            mp[vec[i]] = 1;
       // cout<<vec[i]<<" \n";
    }


   // cout<<"Size: "<<mp.size()<<endl;
    for(auto it=mp.begin();it!=mp.end();it++)
        cout<<it->first<<endl;
    return 0;
}

