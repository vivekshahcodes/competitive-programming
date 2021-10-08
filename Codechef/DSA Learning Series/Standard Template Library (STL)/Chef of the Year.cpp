#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    unordered_map<string,string> m;
    unordered_map<string,int> m1,m2;

    for(int i=0;i<n;i++){
        
        string name, country;
        cin>>name>>country;
        m[name] = country;

    }

    int a = 0, b = 0;

    while(k--){

        string q;
        cin>>q;

        m1[q]++;
        a = max(a,m1[q]);
        m2[m[q]]++;
        b = max(b,m2[m[q]]);
    }

    vector<string> v1,v2;

    for(auto i:m1){
        if(i.second==a){
            v1.push_back(i.first);
        }
    }

    for(auto i:m2){
        if(i.second==b){
            v2.push_back(i.first);
        }
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    cout<<v2[0]<<endl<<v1[0];

    return 0;
}
