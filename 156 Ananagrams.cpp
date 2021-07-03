#include<bits/stdc++.h>
using namespace std;
vector<string>vec;
vector<string>::iterator it;
map<string,int>mp;

bool Check(string str1,string str2){
    char ch;
    for(int i=0;i<str1.size();i++){
        ch = str1[i];
        if(ch>='A' && ch<='Z')
            ch = ch-'A' + 'a';
        str1[i] = ch;
    }
     for(int i=0;i<str2.size();i++){
        ch = str2[i];
        if(ch>='A' && ch<='Z')
            ch = ch-'A' + 'a';
        str2[i] = ch;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2)
        return true;
    return false;
}

void Annagram(){
    mp.clear();
    string str1,str2;
    for(int i=0;i<vec.size()-1;i++){
        str1 = vec[i];
        for(int j=i+1;j<vec.size();j++){
            str2 = vec[j];
            if(Check(str1,str2)){
                 mp[vec[i]] = 1;
                mp[vec[j]] = 1;
                break;
            }
        }
    }
}

int main()
{
    string str,str1;
    char ch;
    int cnt = 0;
    getline(cin,str,'#');
    vec.clear();

    for(int i=0;i<str.size();i++){
        ch = str[i];
        if(ch=='\n') ch = ' ';
        if(ch==' '){
            vec.push_back(str1);
            str1.clear();
        }
        if(ch==' ') continue;
        str1+=ch;
    }
    sort(vec.begin(),vec.end());
    Annagram();
    for(int i=0;i<vec.size();i++){
            if(mp[vec[i]]==0)
            cout<<vec[i]<<endl;
     }
    return 0;
}

