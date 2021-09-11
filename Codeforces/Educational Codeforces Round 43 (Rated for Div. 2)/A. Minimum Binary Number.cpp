#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    string s;

    cin>>s;

    int ones = 0, zeroes = 0;

    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ones++;
        }else{
            zeroes++;
        }
    }

    if(ones>=1){
        cout<<1;
        for(int i=0;i<zeroes;i++){
            cout<<0;
        }
    }else{
        cout<<0;
    }

    return 0;
}
