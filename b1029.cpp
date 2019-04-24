#include<bits/stdc++.h>
using namespace std;

int main(){
    string sale,need;
    map<char,int> num;
    getline(cin,sale);
    getline(cin,need);
    for(int i=0;i<sale.size();i++){
        char now=sale[i];
        map<char,int>::iterator it=num.find(now);
        if(it!=num.end()){
            it->second++;
        }else{
            num[now]=1;
        }
    }
    int less=0;
    for(int i=0;i<need.size();i++){
        char now=need[i];
        map<char,int>::iterator it=num.find(now);
        if(it!=num.end()){
            if(it->second>0){
                it->second--;
            }else{
                less++;
            }
        }else{
            less++;
        }
    }
    if(less){
        printf("No %d\n",less);
    }else{
        printf("Yes %d\n",sale.size()-need.size());
    }
    return 0;
}

