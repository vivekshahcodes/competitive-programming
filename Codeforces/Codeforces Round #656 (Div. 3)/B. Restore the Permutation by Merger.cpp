#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    n*=2;

    int a[n];
    set<int> s;
    vector<int> v;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(s.count(a[i])==0){
            v.push_back(a[i]);
        }
        s.insert(a[i]);
    }

    for(auto i:v){
        cout<<i<<" ";
    } 

    cout<<endl;

  }

  return 0;

}
