#include<bits/stdc++.h>
#define Size 1005
using namespace std;
bool flag[Size+4];
vector<int>prime;
void sieve(int n){
    prime.push_back(1);
    prime.push_back(2);
    for(int i=3;i*i<=n;i+=2){
        if(flag[i]==false){
            for(int j=i*i;j<=n;j+=i)
                flag[j] = true;
        }
    }
    for(int i=3;i<=n;i+=2){
        if(flag[i]==false)
            prime.push_back(i);
    }
}
int main()
{
    int n,c,sz,total,mid,st,ed,temp;
    while(scanf("%d %d",&n,&c)!=EOF){
        cout<<n<<" "<<c<<":";
            prime.clear();
        sieve(n);
        sz = prime.size();
        if(n==1)
            cout<<" 1"<<endl;
        else{
        if(sz%2==0){
            mid = sz/2;
            total = 2*c;
            temp = total;
            temp = temp/2;
            st = mid - temp;
            ed = mid + temp-1;
        }
        else{
                mid = sz/2;
            total = 2*c-1;
            temp = total;
            temp = total/2;
            st = mid - temp;
            ed = mid + temp;
        }
        if(total>=sz){
            for(int i=0;i<sz;i++){
                cout<<" "<<prime[i];
            }
            cout<<endl;
        }
        else{
            for(int i=st;i<=ed;i++)
                cout<<" "<<prime[i];
            cout<<endl;
        }
        }
        cout<<endl;

    }

    return 0;
}

