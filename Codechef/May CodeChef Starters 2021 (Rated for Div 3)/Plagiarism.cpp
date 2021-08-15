#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n,m,k;

    cin>>n>>m>>k;

    vector<int> ans;
    map<int,int> ma;

    for(int i=0;i<k;i++){
        int input;
        cin>>input;
        if(input<=n){
            ma[input]++;
        }
    }

    for(auto i:ma){
        if(i.second>1){
            ans.push_back(i.first);
        }
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
