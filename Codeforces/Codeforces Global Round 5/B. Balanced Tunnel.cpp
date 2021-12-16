#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    map<int,int> m;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        m[input] = i;
    }

    int ans = 0, ma = 0;

    for(int i=0;i<n;i++){
        if(m[a[i]]<ma){
            ans++;
        }else{
            ma = max(m[a[i]],ma);
        }
    }

    cout<<ans;

    return 0;
}
