#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[102],str2[102],str3[102];
    map<string,string>m;
    map<string,string>::iterator it;
    int t,q;
    cin>>t;
    while(t--){
        scanf("%*c%[^\n]%*c",str1);
        scanf("%[^\n]",str2);
        m.insert(make_pair(str1,str2));
    }
    cin>>q;
    for(int i=0;i<q;i++){
        scanf("%*c%[^\n]",str3);
        for(it=m.begin();it!=m.end();it++){
            if(it->first==str3)
                cout<<it->second<<endl;
        }
    }
    return 0;
}


