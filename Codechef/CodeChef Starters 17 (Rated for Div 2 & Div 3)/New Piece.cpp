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

        int a,b,c,d;

        cin>>a>>b>>c>>d;

        if(a==c && b==d){
            cout<<0<<endl;
        }else if((a+b)%2 == (c+d)%2){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }

    return 0;
}
