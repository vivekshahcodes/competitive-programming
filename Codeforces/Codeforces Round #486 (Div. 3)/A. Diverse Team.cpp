#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k;

    cin>>n>>k;

    int a[n+1],prevcount=0;

    set<int> s;

    vector<int> v;
    
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s.insert(a[i]);
        if(s.size()!=prevcount){
            v.push_back(i);
        }
        prevcount = s.size();
    }

    if(s.size()>=k){
        cout<<"YES"<<endl;
        int count = 0;
        for(auto i:v){
            cout<<i<<" ";
            count++;
            if(count==k){
                break;
            }
        }
    }else{
        cout<<"NO";
    }

    return 0;
}
