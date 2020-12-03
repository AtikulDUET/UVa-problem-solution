#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,j;
    char str1[1000002],str2[1000002];
    while(scanf("%s %s",str1,str2)!=EOF){
            j = 0;
            len = strlen(str1);
        for(int i=0;str2[i]!='\0';i++){
                if(str2[i]==str1[j]){
                    j++;
                }
        }
        if(j==len)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

