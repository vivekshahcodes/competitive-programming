#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        v.push_back({input,i+1});
    }

    sort(v.rbegin(),v.rend());

    cout<<v[k-1].first<<endl;

    for(int i=0;i<k;i++){
        cout<<v[i].second<<" ";
    }

    return 0;
}
