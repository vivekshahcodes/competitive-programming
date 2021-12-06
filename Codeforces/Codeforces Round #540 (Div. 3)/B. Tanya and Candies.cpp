#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n+1], o[n+1] = {0}, e[n+1] = {0};

    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i&1){
            o[i] += a[i];
        }else{
            e[i] += a[i];
        }

        o[i] += o[i-1];
        e[i] += e[i-1];
    }

    int ans = 0;

    for(int i=1;i<=n;i++){

        int odd = o[i-1] + e[n] - e[i];
        int even = e[i-1] + o[n] - o[i];

        if(odd==even){
            ans++;
        }        
    }

    cout<<ans;

    return 0;
}
