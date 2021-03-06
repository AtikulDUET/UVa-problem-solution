#include<bits/stdc++.h>
using namespace std;
int cnt[26];


int Calculate(char str[]){
    int total = 0,rem,digit,k=0;
    char ch;
    int len = strlen(str);
    for(int i=len-1;i>=0;i--){
            ch = str[i];
            digit = cnt[ch-'A'];
            rem = pow(26.0,k);
            rem = digit*rem;
            total += rem;
            k++;
    }
    return total;
}


int main()
{
    char str[100],str1[100];
    char ch;
    int t,n,k=0,diff;
    for(char ch='A';ch<='Z';ch++){
        cnt[ch-'A'] = k++;
    }
    cin>>t;
    while(t--){
        scanf("%[^-]%*c%d",str,&n);
        k = 0;
        for(int i=0;str[i]!='\0';i++){
            if(str[i]>='A'&&str[i]<='Z')
                str1[k++] = str[i];
        }
        str1[k] = '\0';
        int temp = Calculate(str1);
        diff = abs(temp-n);
        if(diff<=100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;
    }



    return  0;
}

