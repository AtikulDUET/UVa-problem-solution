#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,len;
    double width,radius,pi,red,area;
    pi = acos(-1);
    cin>>t;
    while(t--){
        cin>>len;
        width = (len*3)/5.0;
        radius = len / 5.0;
        area = len*width;
        red = pi*radius*radius;
        printf("%.2lf ",red);
        printf("%.2lf\n",area-red);
    }
    return 0;
}

