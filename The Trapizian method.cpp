#include<bits/stdc++.h>
using namespace std;
double Fun(double n){
    int ans = 0;
    ans = 1/(1+n*n);
    return ans;
}

int main()
{
    int n;
    double a,b,h,sum=0;

    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"Enter the value of n: ";
    cin>>n;

    double X[n+2],Y[n+2];

    h = (b-a)/n;

    for(int i=0;i<=n;i++){
        X[i] = a + i*h;
        Y[i] = Fun(X[i]);
        cout<<"X["<<i+1<<"]: "<<X[i]<<"  \tY["<<i+1<<"]:  "<<Y[i]<<endl;
    }



    for(int i=1;i<n;i++){
        sum += (2*Y[i]);
    }

    sum += (h/2)+(Y[0] + Y[n]);


    cout<<"\n\nDefine integral is: "<<sum<<endl;
    return 0;
}
