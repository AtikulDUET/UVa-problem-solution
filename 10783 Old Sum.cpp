#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,sum,cas=1;
    cin>>t;
    while(t--){
            sum = 0;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
                if(i%2==1){
            sum = sum + i;
                }
        }
        cout<<"Case "<<cas<<": "<<sum<<endl;
        cas++;
    }
    return 0;
}

