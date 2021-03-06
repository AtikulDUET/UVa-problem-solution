#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt[26],t,Min,temp;
    string str;
    char ch;
    cin>>t;
    while(t--){
        cin>>str;
        Min = INT_MAX;
        memset(cnt,0,sizeof(cnt));
        for(int i=0;i<str.size();i++){
            ch = str[i];
            cnt[ch-'A']++;
        }
        for(int i=0;i<26;i++){
            ch = char('A'+i);
            if(ch=='M' || ch=='G'||ch=='I'||ch=='T'){
                temp = cnt[i]/1;
                if(temp<Min)
                    Min = temp;
            }
            else if(ch=='A'){
                temp = cnt[i]/3;
                if(temp<Min)
                    Min = temp;
            }
            if(ch=='R'){
                temp = cnt[i]/2;
                if(temp<Min)
                    Min = temp;
            }

        }
        cout<<Min<<endl;

    }
    return 0;
}

