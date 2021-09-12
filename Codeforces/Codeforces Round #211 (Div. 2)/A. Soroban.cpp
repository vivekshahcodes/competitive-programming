#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    if(n==0){
        cout<<"O-|-OOOO"<<endl;
    }

    while(n>0){

        ll temp = n%10;
        n/=10;

        if(temp<5){
            cout<<"O-|";
        }else{
            cout<<"-O|";
            temp-=5;
        }

        for(int i=0;i<temp;i++){
            cout<<"O";
        }

        cout<<"-";

        for(int i=0;i<4-temp;i++){
            cout<<"O";
        }

        cout<<endl;
    }

    return 0;
}
