#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    while(scanf("%s",ch)!=EOF){
    for(int i=0;ch[i]!='\0';i++){
        cout<<(char)(ch[i]-7);
    }
    cout<<endl;
    }
    return 0;
}

