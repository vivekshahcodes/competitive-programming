#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n], mi = INT_MAX;

    for(int i=0;i<n;i++){
        cin>>a[i];
        mi = min(mi,a[i]);
    }

    vector<int> v;

    for(int i=0;i<n;i++){
        if(a[i]==mi){
            v.push_back(i+1);
        }
    }

    sort(v.begin(),v.end());

    int ans = INT_MAX;

    for(int i=1;i<v.size();i++){
        ans = min(ans,v[i]-v[i-1]);
        if(ans==1){
            break;
        }
    }

    cout<<ans;

    return 0;
}
