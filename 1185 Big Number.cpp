#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    double digit;
    cin>>t;
    while(t--){
            digit = 0;
        cin>>n;
        for(int i=1;i<=n;i++){
            digit += log10(i);
        }
        n = digit;
        cout<<n+1<<endl;
    }
    return 0;
}


