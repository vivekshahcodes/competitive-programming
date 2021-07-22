#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,m,k;

    cin>>n>>m>>k;

    if(min(m,k)>=n){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}
