#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,Min,Max,value;
    cin>>t;
    while(t--){
        cin>>n;
        Min = INT_MAX, Max = 0;
        while(n--){
           cin>>value;
           if(value<Min)
                Min = value;
           if(value>Max)
            Max = value;
        }
        cout<<2*(Max-Min)<<endl;
    }
    return 0;
}

