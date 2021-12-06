#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n];

    set<int> s;

    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }

    if(s.size()>3){
        cout<<-1;
    }else{
        vector<int> v;
        for(int i:s){
            v.push_back(i);
        }
        
        if(s.size()==1){
            cout<<0;
        }else if(s.size()==2){
            int x = v[0] + v[1];
            if(x&1){
                cout<<v[1]-v[0];
            }else{
                cout<<(x/2)-v[0];
            }
        }else{
            if(v[2]-v[1] == v[1]-v[0]){
                cout<<v[1]-v[0];
            }else{
                cout<<-1;
            }
        }
    }

    return 0;
}
