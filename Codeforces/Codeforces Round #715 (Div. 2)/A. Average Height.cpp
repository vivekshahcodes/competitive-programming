#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int a[n];

    deque<int> ans;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]&1){
            ans.push_front(a[i]);
        }else{
            ans.push_back(a[i]);
        }
    }

    for(auto i:ans){
        cout<<i<<" ";
    }

    cout<<endl;

  }

  return 0;

}
