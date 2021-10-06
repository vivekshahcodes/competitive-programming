#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    map<int,int> m;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s.length()]++;
    }

    string pass;
    cin>>pass;

    int best = 0, worst = 0;

    bool flag = true;

    for(auto i:m){
        if(i.first<pass.length()){
            best += i.second;
            worst += i.second;
        }else if(i.first==pass.length() && flag){
            best += 1;
            worst += i.second;
            flag = false;
        }else if(i.first==pass.length()){
            worst += i.second;
        }
    }

    int b = best, w = worst;

    best += (best/k)*5;
    worst += (worst/k)*5;

    if(b%k==0){
        best -= 5;
    }

    if(w%k==0){
        worst -= 5;
    }

    cout<<best<<" "<<worst;

    return 0;
}
