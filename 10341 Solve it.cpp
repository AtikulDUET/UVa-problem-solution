#include<bits/stdc++.h>
using namespace std;
double p,q,r,s,t,u,temp;
double Cal(double x){
    double ans;
    ans = p*(1/exp(x)) + q*sin(x) + r*cos(x) + s*tan(x)+t*x*x+u;
    return ans;
}
int cnt=1;
void BS(){
    double temp,st=0.0, ed = 1.0, mid;
    while(st+(1e-7)<ed){
        mid = (st+ed)/2.0;
        temp = Cal(mid);
        if(Cal(st)*temp<=0)
            ed = mid;
        else
            st = mid;

    }
    printf("%0.4lf\n",mid);

}

int main()
{
  //  freopen("aaaa.txt","w",stdout);
    while(scanf("%lf%lf%lf%lf%lf%lf",&p,&q,&r,&s,&t,&u)!=EOF){
         double n1,n2;
         if(Cal(0)*Cal(1)>0)
            cout<<"No solution"<<endl;

         else{
            BS();
         }
    }
    return 0;
}

