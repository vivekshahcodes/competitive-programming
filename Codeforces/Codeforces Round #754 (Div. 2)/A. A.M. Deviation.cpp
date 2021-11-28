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

        int a,b,c;
        cin>>a>>b>>c;

        if((a+b+c)%3==0){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }
    }

    return 0;
}
