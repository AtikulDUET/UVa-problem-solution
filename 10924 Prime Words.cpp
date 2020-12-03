#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int str[200];
    char letter[25];
    int i=1,sum;

    for(char ch='a';ch<='z';ch++){
        str[ch] = i++;
    }

    for(char ch='A';ch<='Z';ch++){
        str[ch] = i++;
    }
    while(scanf("%s",letter)!=EOF){
            sum = 0;
        for(int i=0;letter[i]!='\0';i++){
            sum +=str[letter[i]];
        }
        if(isPrime(sum)==1 || sum==1)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
    return 0;
}


