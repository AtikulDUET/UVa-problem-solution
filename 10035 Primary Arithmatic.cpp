#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n1,n2;
    int rem1,rem2,sum,count,ck;
    while(scanf("%u%u",&n1,&n2)!=EOF){
        sum = 0;  ck = 0;  count=0;
        if(n1==0 && n2==0)
            break;
        while(n1!=0 || n2!=0){
            rem1 = n1 % 10;   rem2 = n2 % 10;
            sum = rem1 + rem2+ck;
            n1 = n1 / 10; n2 = n2 / 10;
            if(sum>=10){
                count++;
                ck = 1;
            }
            else
                ck = 0;
        }
       if(count==0)
        cout<<"No carry operation."<<endl;
        else if(count==1)
             cout<<count<<" carry operation."<<endl;
       else
        cout<<count<<" carry operations."<<endl;
    }
    return 0;
}

