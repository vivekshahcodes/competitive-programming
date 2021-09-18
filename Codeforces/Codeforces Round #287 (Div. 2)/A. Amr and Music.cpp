#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    pair<int,int> a[n];

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        a[i] = {input,i+1};
    }

    sort(a,a+n);

    vector<int> ans;
    int curr = 0;

    for(int i=0;i<n;i++){
        curr+=a[i].first;
        if(curr<=k){
            ans.push_back(a[i].second);
        }else{
            break;
        }
    }

    cout<<ans.size()<<endl;

    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}
