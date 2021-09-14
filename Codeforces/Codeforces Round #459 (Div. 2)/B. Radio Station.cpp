#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    map<string,string> ans;

    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        b+=";";
        ans[b] = a;
    }

    for(int i=0;i<m;i++){
        string a,b;
        cin>>a>>b;
        cout<<a<<" "<<b<<" #"<<ans[b]<<endl;
    }

    return 0;
}
