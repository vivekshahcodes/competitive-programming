#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string temp,k;

    cin>>n>>temp>>k;

    if(k=="week"){
        if(n==5||n==6){
            cout<<53;
        }else{
            cout<<52;
        }
    }else{
        if(n<=29){
            cout<<12;
        }else if(n==30){
            cout<<11;
        }else{
            cout<<7;
        }
    }

    return 0;
}
