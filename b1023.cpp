#include<bits/stdc++.h>
using namespace std;

int judge(char c){
    int r=0;
    if(c>='A'&&c<='Z')  r=1;
    return r;
}

int main(){
    set<char> bk;
    string bks,line;
    cin>>bks>>line;
    int flag=0;
    for(int i=0;i<bks.length();i++){
        if(bks[i]=='+'){
            flag=1;
            continue;
        }
        bk.insert(bks[i]);
        if(judge(bks[i]))
            bk.insert(bks[i]+32);
    }
    for(int i=0;i<line.length();i++){
        if(bk.find(line[i])==bk.end()){
            if(flag==1&&judge(line[i])) continue;
            printf("%c",line[i]);
        }
        else    continue;
    }
    printf("\n");
    return 0;
}

