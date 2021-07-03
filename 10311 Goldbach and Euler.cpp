#include<bits/stdc++.h>
#define Size 100000000
using namespace std;
bool flag[Size+1];
vector<int>prime;
vector<int>::iterator it;

void sieve(){
    prime.push_back(2);
    for(int i=3;i*i<=Size;i+=2){
        if(flag[i]==0){
            for(int j=i*i;j<=Size;j+=i)
                flag[j] = true;
        }
    }
    for(int i=3;i<=Size;i+=2){
        if(flag[i]==0)
            prime.push_back(i);
    }

}

int main()
{
    sieve();
    int n,temp1,temp2;
    bool ck;
   // freopen("a10.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        if(n&1 && n>3){
        if(flag[n-2]==0)
            cout<<n<<" is the sum of "<<2<<" and "<<n-2<<"."<<endl;
        else
            cout<<n<<" is not the sum of two primes!"<<endl;
        }
        else{
            ck  = 0;
            for(int i=n/2-1;i>=2;i--){
                temp1 = i, temp2 = n - i;
                if(  (temp1%2!=0 && flag[temp1]==0) &&(temp2%2!=0 && flag[temp2]==0) ){
                    cout<<n<<" is the sum of "<<temp1<<" and "<<temp2<<"."<<endl;
                    ck = 1;
                    break;
                }
            }
            if(ck==0)
                 cout<<n<<" is not the sum of two primes!"<<endl;
        }

    }
    return 0;
}

