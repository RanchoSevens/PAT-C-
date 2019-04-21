#include <iostream>
#include <cmath>
using namespace std;
long long a, b, c, d;
long long gcd(long long t1, long long t2) { // 辗转相除法求最大公约数
    return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}

void func(long long m, long long n) { //格式输出
    if (m * n == 0) {
        printf("%s", n == 0 ? "Inf" : "0");
        return;
    }
    long long k=gcd(m,n);
    m/=k,n/=k;
    int flag = ((m < 0) && (n > 0)) || ((m > 0) && (n < 0));
    if (flag) printf("(-");
    m = abs(m); n = abs(n);
    int t=m/n;
    m%=n;
    if(t){
        printf("%lld%s",t,m?" ":"");
    }
    if(m==0){
        printf("%s",flag?")":"");
        return;
    }else {
        printf("%lld/%lld%s",m,n,flag?")":"");
    }
}
int main() {
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
    func(a, b); printf(" + "); func(c, d); printf(" = "); func(a * d + b * c, b * d); printf("\n");
    func(a, b); printf(" - "); func(c, d); printf(" = "); func(a * d - b * c, b * d); printf("\n");
    func(a, b); printf(" * "); func(c, d); printf(" = "); func(a * c, b * d); printf("\n");
    func(a, b); printf(" / "); func(c, d); printf(" = "); func(a * d, b * c);
    return 0;
}
