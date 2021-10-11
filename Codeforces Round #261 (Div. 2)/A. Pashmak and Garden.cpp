#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c,d;

    cin>>a>>b>>c>>d;

    if(a!=c && b!=d && ((abs(c-a))!=(abs(d-b)))){
        cout<<-1;
    }else if(a!=c && b!=d){
        cout<<a<<" "<<d<<" "<<c<<" "<<b;
    }else{
        if(a==c){
            cout<<a+abs(b-d)<<" "<<b<<" "<<c+abs(b-d)<<" "<<d;
        }else{
            cout<<a<<" "<<b+abs(a-c)<<" "<<c<<" "<<d+abs(a-c);
        }
    }

    return 0;
}
