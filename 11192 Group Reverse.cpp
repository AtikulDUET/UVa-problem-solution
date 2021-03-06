#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,st,ed,sz;
    string str1,str2;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            break;
        cin>>str1;
        str2.clear();

        n = str1.size()/n;
        for(int i=1;i<=str1.size();i++){
            if(i%n==0){
                    str2 +=str1[i-1];
                 reverse(str2.begin(),str2.end());
                 cout<<str2;
                str2.clear();
            }
            else{
                str2 += str1[i-1];
            }
        }

        cout<<endl;
    }
    return 0;
}

