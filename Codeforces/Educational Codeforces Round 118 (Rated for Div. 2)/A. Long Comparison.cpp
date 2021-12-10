#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        string x,y;
        ll a,b;

        cin>>x>>a>>y>>b;

        ll n = x.length(), m = y.length();

        if(n+a>m+b){
            cout<<'>';
        }else if(n+a<m+b){
            cout<<'<';
        }else{
            if(a==b){
                if(stoi(x)<stoi(y)){
                    cout<<'<';
                }else if(stoi(x)>stoi(y)){
                    cout<<'>';
                }else{
                    cout<<'=';
                }
            }else{
                ll extra;
                if(n<m){
                    extra = m-n;
                    for(ll i=0;i<extra;i++){
                        x.push_back('0');
                    }
                }else{
                    extra = n-m;
                    for(ll i=0;i<extra;i++){
                        y.push_back('0');
                    }
                }
                if(stoi(x)<stoi(y)){
                    cout<<'<';
                }else if(stoi(x)>stoi(y)){
                    cout<<'>';
                }else{
                    cout<<'=';
                }

            }
        }

        cout<<endl;
    }

    return 0;
}
