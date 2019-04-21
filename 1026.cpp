#include<bits/stdc++.h>
using namespace std;
//typedef long long   LL;
#define LL long long

void edge(LL n,char C){
    for(int i=0;i<n;i++){
        printf("%c",C);
    }
}

void mid(LL n,char C){
    int num=(n+1)/2 - 2;
    for(int k=0;k<num;k++){

        for(int i=0;i<n;i++){
            if(i==0||i==n-1){
                printf("%c",C);
            }else{
                printf(" ");
            }
            if(i==n-1){
                printf("\n");
            }
        }
    }
}

int main(){
    LL n;
    char C;
    scanf("%lld %c",&n,&C);
    edge(n,C);
    printf("\n");
    mid(n,C);
    edge(n,C);
    return 0;
}

