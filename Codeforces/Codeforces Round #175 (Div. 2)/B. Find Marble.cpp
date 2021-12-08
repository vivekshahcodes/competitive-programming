#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,s,e;

    cin>>n>>s>>e;

    int a[n+1];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int ans = 0;

    int temp = s;

    while(temp!=e){
        if(a[temp]==s){
            ans = -1;
            break;
        }
        temp = a[temp];
        ans++;
    }

    cout<<ans;

    return 0;
}
