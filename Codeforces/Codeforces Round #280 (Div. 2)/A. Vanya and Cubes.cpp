#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int blocks;

    cin>>blocks;

    int level = 0, curr = 0, incr = 1, total = 0;

    do{
        curr += incr;
        incr++;
        total += curr;
        if(total<=blocks){
            level++;
        }
    }while(total<blocks);

    cout<<level;

    return 0;
}
