#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=1,start,distance;
    double cen;
    cin>>t;
    while(t--){
        cin>>start>>distance;
        cen = (5*((32+distance)-32))/9.0;
        printf("Case %d: %.2lf\n",cas++,cen+start);
    }
    return 0;
}

