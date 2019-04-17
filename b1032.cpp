#include<bits/stdc++.h>

using namespace std;

int main() {
    int pt[100001] = {};
    int N, s, t, flag;
    set<int> a;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d%d", &s, &t);
        pt[s] += t;
        a.insert(s);
    }
    flag = s;
    for (set<int>::iterator it = a.begin(); it != a.end(); it++) {
        int now = *it;
        if (pt[now] > pt[flag]) flag = now;
    }
    printf("%d %d\n", flag, pt[flag]);
    return 0;
}
