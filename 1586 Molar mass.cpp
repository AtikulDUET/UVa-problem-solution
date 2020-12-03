#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,double>m;
    m['C'] = 12.01;
    m['H'] = 1.008;
    m['O'] = 16.00;
    m['N'] = 14.01;
    string str;
    char ch1,ch2;
    int t,temp,n;
    double total;
    cin>>t;
    while(t--){
        total = 0.0;
        cin>>str;
        for(int i=0;i<str.size();i++){
            ch1 = str[i],ch2=str[i+1];
            if( (ch1>='A' && ch1<='Z') &&(ch2>='0' && ch2<='9')){
                    temp = 0;
                while(str[i+1]>='0' && str[i+1]<='9'){
                    temp = temp*10 + (str[i+1]-'0');
                    i++;
                }
                total += m[ch1]*temp;
            }
            else
                total += m[ch1];
        }
        printf("%.3lf\n",total);
    }
    return 0;
}

