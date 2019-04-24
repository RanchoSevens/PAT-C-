#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define MAX 1000000007
int Pnum[100001]={};

int main(){
    pair<LL,LL> num;
    string inp;
    getline(cin,inp);
    num.first=num.second=0;
    int len=inp.size();
    LL how_many=0;
    for(int i=0;i!=len;++i){
        switch(inp[i]){
            case 'P':
                num.first++;
                break;
            case 'A':
                Pnum[i]=num.first;
                break;
        }
    }
    for(int i=len-1;i!=-1;--i){
        LL res=0;
        switch(inp[i]) {
            case 'P':
                break;
            case 'A':
                res=Pnum[i]*num.second;
                how_many += res;
                break;
            default:
                num.second++;
        }
    }
    printf("%lld\n",how_many%MAX);
    return 0;
}

