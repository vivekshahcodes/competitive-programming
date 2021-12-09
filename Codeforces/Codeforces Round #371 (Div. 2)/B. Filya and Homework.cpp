#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    set<int> s;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        s.insert(input);
    }

    vector<int> v;

    for(int i:s){
        v.push_back(i);
    }

    if(v.size()>3){
        cout<<"NO";
    }else if(v.size()==3){
        if(v[1]-v[0]==v[2]-v[1]){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }else{
        cout<<"YES";
    }

    return 0;
}
