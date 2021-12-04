#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    vector<pair<int,int>> v;

    for(int i=1;i<=n;i++){
        int input;
        cin>>input;
        v.push_back({input,i});
    }

    sort(v.begin(),v.end());

    int ans = 0;
    vector<int> a;

    for(int i=n-1;i>=n-k;i--){
        ans += v[i].first;
        a.push_back(v[i].second);
    }

    sort(a.begin(),a.end());

    cout<<ans<<endl;

    if(k==1){
        cout<<n;
        return 0;
    }

    cout<<a[0]<<" ";

    for(int i=1;i<a.size();i++){

        if(i==a.size()-1){
            cout<<a[i]-a[i-1]+(n-a[i]);
            break;
        }

        cout<<a[i]-a[i-1]<<" ";
    }

    return 0;
}
