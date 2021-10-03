#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    vector<pair<int,int>> pos;
    vector<pair<int,int>> neg;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a<0){
            neg.push_back({a,b});
        }else{
            pos.push_back({a,b});
        }
    }

    sort(pos.begin(),pos.end());
    sort(neg.rbegin(),neg.rend());

    int i = 0, j = 0, ans = 0;

    while(i<pos.size() && j<neg.size()){

        ans += pos[i].second;
        i++;

        ans += neg[j].second;
        j++;

    }

    int it = 0;

    while(i<pos.size() && it<1){
        ans += pos[i].second;
        i++;
        it++;
    }

    while(j<neg.size() && it<1){
        ans += neg[j].second;
        j++;
        it++;
    }

    cout<<ans;

    return 0;
}
