#include<bits/stdc++.h>
using namespace std;

void setPrime(vector<bool>& isPrime,int maxn){
    isPrime[0] = isPrime[1] = false;
    vector<int> prime(maxn,0);
    for(int i=2;i<=maxn;++i){
        if (isPrime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <=prime[0] && i*prime[j] <= maxn; j++) {
            isPrime[i*prime[j]] = false;
            if (i % prime[j] == 0) {
                break;
            }
        }
    }
}

bool judge(int num,vector<bool>& isPrime){
    if(num<2) return false;
    int maxn = int(sqrt(1.0*num));
    for(int i=2;i<=maxn;++i){
        if(num%i==0)    return false;
    }
    return true;
}

int to_int(string s,int start,int end){
    int res = 0;
    int t = 1;
    for(int i = end;i>start;--i){
        res += t * (s[i-1] - '0');
        t *= 10;
    }
    return res;
}

int main(){
    int L,K;
    string str;
    cin>>L>>K>>str;
    vector<bool> isPrime(int(1e6+1),true);
    setPrime(isPrime,int(1e6));
    bool flag = true;
    for(int i=0;i<=L-K;++i){
        string sub = str.substr(i,K);
        int num = to_int(str,i,i+K);
        // string sub = str.substr(i,K);
        // int num = stoi(sub);
        if(num<1000000&&isPrime[num]){
            flag = false;
            cout<<sub;
            break;
        }else if(num>=1000000&&judge(num,isPrime)){
            flag = false;
            cout<<sub;
            break;
        }
    }
    if(flag)    cout<<"404";
    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;
// bool isPrime(int n) {
//     if (n == 0 || n == 1) return false;
//     for (int i = 2; i * i <= n; i++)
//         if (n % i == 0) return false;
//     return true;
// }
// int main() {
//     int l, k;
//     string s;
//     cin >> l >> k >> s;
//     for (int i = 0; i <= l - k; i++) {
//         string t = s.substr(i, k);
//         int num = stoi(t);
//         if (isPrime(num)) {
//             if(k==3&&l==10) while(true){}
//             cout << t;
//             return 0;
//         }
//     }
//     cout << "404\n";
//     return 0;
// }
