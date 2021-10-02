#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int r1,c1,r2,c2;

    cin>>r1>>c1>>r2>>c2;

    //Rook

    if(r1==r2 || c1==c2){
        cout<<1<<" ";
    }else{
        cout<<2<<" ";
    }

    //Bishop

    int x = r1+c1;
    int y = r2+c2;

    if((x+y)&1){
        cout<<0<<" ";
    }else{
        if(abs(r2-r1)==abs(c2-c1)){
            cout<<1<<" ";
        }else{
            cout<<2<<" ";
        }
    }

    //King

    cout<<max(abs(r2-r1),abs(c2-c1));

    return 0;
}
