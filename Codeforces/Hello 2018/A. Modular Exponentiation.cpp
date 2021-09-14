#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,m;

    cin>>n>>m;

    if(n>=m){
        cout<<m;
    }else{
        int x = 1;
        bool flag = false;
        for(int i=1;i<=n;i++){
            x*=2;
            if(x>m){
                flag = true;
                break;
            }
        }

        if(flag){
            cout<<m;
        }else{
            cout<<m%x;
        }
    }

    return 0;
}
