#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n,m,k;

    cin>>n>>m>>k;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        v.push_back({input,i+1});
    }

    vector<int> ans;

    sort(v.rbegin(),v.rend());

    int i;

    for(i=0;i<n;i++){
        if(v[i].first>=m){
            ans.push_back(v[i].second);
        }else{
            break;
        }
    }

    while(ans.size()<k){
        ans.push_back(v[i].second);
        i++;
    }

    sort(ans.begin(),ans.end());

    cout<<ans.size()<<" ";

    for(auto i:ans){
        cout<<i<<" ";
    }

    cout<<endl;

  }

  return 0;

}
