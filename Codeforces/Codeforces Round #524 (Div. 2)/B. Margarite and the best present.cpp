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

        ll a,b;

        cin>>a>>b;

        if(a&1 && b&1){
            cout<<-1*((a+b)/2)<<endl;
        }else if(!(a&1) && !(b&1)){
            cout<<(a+b)/2<<endl;
        }else if(!(a&1) && b&1){
            cout<<-1*((b-a+1)/2)<<endl;
        }else{
            cout<<(b-a+1)/2<<endl;
        }
    }

    return 0;
}
