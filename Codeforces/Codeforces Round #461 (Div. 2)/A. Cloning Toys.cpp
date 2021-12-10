#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b;

    cin>>a>>b;

    if(b==1){
        
        if(a==0){
            cout<<"Yes";
        }else{
            cout<<"No";
        }

        return 0;
    }

    if(b==0){
        cout<<"No";
    }else{
        if(a>b){
            if(a%2 != b%2){
                cout<<"Yes";
            }else{
                cout<<"No";
            }
        }else if(a==b){
            cout<<"No";
        }else if(a==b-1){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }

    return 0;
}
