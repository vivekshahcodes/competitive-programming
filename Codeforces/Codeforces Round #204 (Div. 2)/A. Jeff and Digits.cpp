#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int fives = 0;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        if(input==5){
            fives++;
        }
    }

    int zeroes = n-fives;

    if(zeroes==0){
        cout<<-1;
    }else if(fives<9){
        cout<<0;
    }else{
        int x = fives/9;
        string ans;
        
        for(int i=0;i<x;i++){
            ans+="555555555";
        }

        for(int i=0;i<zeroes;i++){
            ans+="0";
        }

        cout<<ans;
    }

    return 0;
}
