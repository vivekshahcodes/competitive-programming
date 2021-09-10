#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    vector<pair<int,int>> v;

    for(int i=1;i<=n;i++){
        int input;
        cin>>input;
        v.push_back({input,i});
    }

    sort(v.rbegin(),v.rend());

    cout<<v[0].second<<" "<<v[1].first;

    return 0;
}
