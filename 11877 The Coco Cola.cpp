#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,rem,total;
    while(scanf("%d",&n)){
        if(n==0)
            break;
        total = 0;
        while(n>=3){
            rem = n/3;
            total += rem;
            n = rem + (n%3);
        }
        if(n==2)
            total+=1;
        cout<<total<<endl;
    }
    return 0;
}

