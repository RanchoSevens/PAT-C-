#include<bits/stdc++.h>
using namespace std;

int main(){
    int score[101]={};
    int N=0;
    scanf("%d",&N);
    for(int i=0,j=0;i<N;++i){
        scanf("%d",&j);
        score[j]++;
    }
    int k=0;
    scanf("%d",&k);
    while(k--){
        int sco=-1;
        scanf("%d",&sco);
        if(sco>=0){
            printf("%d",score[sco]);
        }
        if(k){
            printf(" ");
        }else{
            printf("\n");
        }
    }
    return 0;
}

