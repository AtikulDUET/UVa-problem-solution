#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000],str2[1500];
    int j,i,cnt=0;
    while(scanf("%[^\n]%*c",str)!=EOF){
            j=0;
        for(i=0,j=0;str[i]!='\0';i++){
            if(str[i]=='"'){
                cnt++;
            if(cnt%2==1){
                str2[j++] = '`';
                str2[j++] = '`';
            }
            else{
                str2[j++]=(char)39;
                str2[j++] = (char)39;
            }
            }
            else
                str2[j++] = str[i];
        }
    str2[j] = '\0';
        cout<<str2<<endl;
    }
    return 0;
}


