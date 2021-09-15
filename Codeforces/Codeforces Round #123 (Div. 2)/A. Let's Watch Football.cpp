#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;

    cin>>a>>b>>c;

    int x = (a*c) - (b*c);

    if(x%b==0){
        x/=b;
    }else{
        x/=b;
        x++;
    }

    cout<<max(x,0);

    return 0;
}
