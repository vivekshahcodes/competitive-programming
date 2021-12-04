#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int o = 0, e = 0;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> options;

    for(int i=0;i<n;i++){
        if(a[i]&1){
            o++;
        }else{
            e++;
        }

        if(o==e && (i+1)!=n){
            options.push_back(abs(a[i+1]-a[i]));
            o = 0;
            e = 0;
        }
    }

    sort(options.begin(),options.end());

    int ans = 0, total = 0;

    for(int i:options){
        if(total+i<=k){
            total += i;
            ans++;
        }else{
            break;
        }
    }

    cout<<ans;

    return 0;
}
