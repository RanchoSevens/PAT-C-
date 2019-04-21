#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a,b,d,sum=0;
    ll num[35]={};
    scanf("%lld%lld%lld",&a,&b,&d);
    sum=a+b;
    ll i=0;
    do{
        num[i++]=sum%d;
        sum/=d;
    }while(sum);
    for(int j=i;j>0;j--){
        printf("%lld",num[j-1]);
    }
    printf("\n");
    return 0;
}
