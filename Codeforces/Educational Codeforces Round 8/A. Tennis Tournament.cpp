#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;

    cin>>a>>b>>c;

    int towels = a*c, bottles = 0, o = 0;

    while(a!=1){
        
        if(a&1) o++;

        int x = a/2;

        a/=2;

        bottles += x*(2*b+1);

    }

    for(int i=0;i<o;i++){
        bottles += 2*b + 1;
    }

    cout<<bottles<<" "<<towels;
    
    return 0;
}
