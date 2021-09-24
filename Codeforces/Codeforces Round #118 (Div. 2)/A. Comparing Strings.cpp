#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a,b;

    cin>>a>>b;

    vector<int> ind;

    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            ind.push_back(i);
        }
    }

    if(ind.size()==2 && a.length()==b.length()){
        if(a[ind[0]]==b[ind[1]] && a[ind[1]]==b[ind[0]]){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }else{
        cout<<"NO";
    }

    return 0;
}
