#include<bits/stdc++.h>
using namespace std;

//二十九个纳特Knut兑一个Sickle
//十七个银西可(Sickle)兑一个加隆(Galleon)
int to_knut(int k,int s,int g){
    return k+(g*17+s)*29;
}

void pt_money(int money){
    if(money<0){
        printf("-");
        money=-money;
    }
    int mk=money%29;
    money/=29;
    int ms=money%17;
    int mg=money/17;
    printf("%d.%d.%d",mg,ms,mk);
}

int main(){
    int pk,ps,pg,ak,as,ag;
    pk=ps=pg=ak=as=ag=0;
    scanf("%d.%d.%d %d.%d.%d",&pg,&ps,&pk,\
    &ag,&as,&ak);
    int p1=to_knut(pk,ps,pg);
    int a1=to_knut(ak,as,ag);
    int change=a1-p1;
    pt_money(change);
    return 0;
}