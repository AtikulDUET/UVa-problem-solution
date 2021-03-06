#include<bits/stdc++.h>
using namespace std;
int Calculate(char str[]){
    int total = 26*26*(str[0]-'A') + 26*(str[1]-'A') + (str[2]-'A');
    return total;
}
int main()
{
    int t,n,temp;
    char str[5];
    cin>>t;
    while(t--){
        scanf("%3s-%d",str,&n);
        temp = Calculate(str);
        int diff = abs(temp-n);
        if(diff<=100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;
    }
    return 0;
}

