#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    map<int,int> prev;
    map<int,int> m;

    int neg = 0;

    for(int i=1;i<=n;i++){
        int input;
        cin>>input;

        if(m[input]==-1) continue;

        if(prev[input]==0){
            prev[input] = i;
        }else{
            int d = i - prev[input];
            if(m[input]==0){
                prev[input] = i;
                m[input] = d;
            }else if(m[input]==d){
                prev[input] = i;
            }else{
                m[input] = -1;
                neg++;
            }
        }

    }

    cout<<m.size()-neg<<"\n";
    for(auto i:m){
        if(i.second!=-1){
            cout<<i.first<<" "<<i.second<<"\n";
        }
    }

    return 0;
}
