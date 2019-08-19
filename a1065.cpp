#include<bits/stdc++.h>
using namespace std;

bool judge(vector<long long> &num){
    if(num[0]<0&&num[1]<0&&LLONG_MIN-num[0]>num[1]) return false;
    if(num[0]>0&&num[1]>0&&LLONG_MAX-num[0]<num[1]) return true;
    if(num[0]+num[1]>num[2]) return true;
    return false;
}

int main(){
    int n;
    vector<long long> num(3,0);
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%lld%lld%lld",&num[0],&num[1],&num[2]);
        bool flag = judge(num);
        if(flag) printf("Case #%d: true\n",i+1);
        else printf("Case #%d: false\n",i+1);
    }
    return 0;
}
/*
1.（长）整形溢出会导致截断，溢出在C++标准里并未定义，由编译器自行决定，所以不一定都是上溢小于零，下溢大于零
2.所以用LLONG_MIN/MAX 减去一个数与另一个数比较的方式，才可以保证安全
*/
