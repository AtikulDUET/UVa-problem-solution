#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[6]="hello";
    int j=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch==str1[j]){
            j++;
        }
    }

    if(j==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

