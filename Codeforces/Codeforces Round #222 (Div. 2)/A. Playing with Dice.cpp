#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x,y,a=0,b=0,d=0;

    cin>>x>>y;

    for(int i=1;i<=6;i++){
        if(abs(x-i)<abs(y-i)){
            a++;
        }else if(abs(x-i)>abs(y-i)){
            b++;
        }else{
            d++;
        }
    }

    cout<<a<<" "<<d<<" "<<b;

    return 0;
}
