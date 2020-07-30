#include<bits/stdc++.h>
using namespace std;
unsigned int Sequence(unsigned int n){
    if(n==1)
        return 1;
    if(n%2==0)
        return Sequence(n/2)+1;
    if(n%2==1)
        return  Sequence(3*n+1)+1;
}
unsigned int Maximum(int a,int b){
    int Max = 0;
    if( a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i=a;i<=b;i++){
        if(Max<Sequence(i))
            Max = Sequence(i);
    }
    return Max;
}
int main()
{
    int i,j;
    while(scanf("%d%d",&i,&j)!=EOF){
    cout<<i<<" "<<j<<" "<<Maximum(i,j)<<endl;
    }
    return 0;
}

