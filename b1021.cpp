#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
char id[101][19];
//#define pi 3.1415926
//#define max(a, b, c) ((a)>(b)?(a):(b))>(c)?((a)>(b)?(a):(b)):(c)

int main() {
    int N;
    int weights[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char Z[12]="10X98765432";
    int flag=1;
    memset(id,0,sizeof(id));
    scanf("%d",&N);
    getchar();
    for(int i=0;i<N;i++){
        gets(id[i]);
        int num=0;
        for(int j=0;j<17;j++){
            char now=id[i][j];
            int k=now-'0';
            num += k*weights[j];
        }
        num%=11;
        if(Z[num]!=id[i][17]){
            flag=0;
            puts(id[i]);
        }
    }
    if(flag)    printf("All passed");
    return 0;
}
12345
