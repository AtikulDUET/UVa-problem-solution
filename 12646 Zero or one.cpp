#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,one,two;
    while(scanf("%d%d%d",&A,&B,&C)==3){
        if(A==B&&B==C&&C==A)
            cout<<"*"<<endl;
        else{
            int cnt = A+B+C;
            if(cnt==1){
                if(A==1) cout<<"A"<<endl;
                else if(B==1) cout<<"B"<<endl;
                else
                    cout<<"C"<<endl;
            }
            else{
                if(A==0) cout<<"A"<<endl;
                else if(B==0) cout<<"B"<<endl;
                else
                    cout<<"C"<<endl;
            }
        }
    }
    return 0;
}

