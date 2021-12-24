#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a;
    ll b,n;

    cin>>a>>b>>n;

    bool flag = false;

    for(ll i=0;i<n;i++){

        if(flag){
            a.push_back('0');
            continue;
        }

        for(ll j=0;j<=9;j++){
            ll x = stoi(a);
            x*=10;
            x+=j;
            if(x%b==0){
                a += to_string(j);
                flag = true;
                break;
            }
        }

        if(!flag){
            break;
        }
    }

    if(flag){
        cout<<a;
    }else{
        cout<<-1;
    }

    return 0;
}
