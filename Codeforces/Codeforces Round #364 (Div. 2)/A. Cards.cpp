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

    sort(v.begin(),v.end());

    for(int i=0;i<n/2;i++){
        cout<<v[i].second<<" "<<v[n-1-i].second<<endl;
    }

    return 0;
}
