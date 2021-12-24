#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> v;

void f(){
    ll x = 0;

    while((1ll<<x)<1e16){
        v.push_back((1<<x));
        x++;
    }
}

bool isPowerOfTwo(ll n){
    if(__builtin_popcountll(n)==1){
        return true;
    } 
    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    f();

    bool visited[n];
    memset(visited,false,sizeof(visited));

    sort(a,a+n);

    ll ans = 0;

    for(ll i=0;i<n;i++){
        bool flag = false;
        for(ll j=0;j<v.size();j++){
            ll x = v[j]-a[i];
            ll y = lower_bound(a,a+n,x)-a;
            if(y==n){
                continue;
            }else if(y==i && a[y]==x){
                if((upper_bound(a,a+n,x)-a)-y>=2){
                    flag = true;
                }
                continue;
            }else if(a[y]==x){
                flag = true;
            }
        }

        if(!flag){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
