#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        v.push_back({input,i+1});
    }

    sort(v.begin(),v.end());

    int x = v.size();

    if(v[x-1].first==v[0].first){
        cout<<"Exemplary pages.";
    }else{
        int d = v[x-1].first-v[0].first;

        if(d&1){
            cout<<"Unrecoverable configuration.";
        }else{

            int y = d/2;

            bool flag = true;

            for(int i=1;i<x-1;i++){
                if(v[i].first!=v[0].first+y){
                    flag = false;
                    break;
                }
            }

            if(flag){
                cout<<y<<" ml. from cup #"<<v[0].second<<" to cup #"<<v[x-1].second<<".";
            }else{
                cout<<"Unrecoverable configuration.";
            }
        }
    }

    return 0;
}
