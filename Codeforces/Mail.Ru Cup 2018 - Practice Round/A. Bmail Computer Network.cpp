#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n+1];

    a[1] = -1;

    for(int i=2;i<=n;i++){
        cin>>a[i];
    }

    vector<int> ans;

    int i = n;

    while(a[i]!=-1){
        ans.push_back(a[i]);
        i = a[i];
    }

    reverse(ans.begin(),ans.end());

    ans.push_back(n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
