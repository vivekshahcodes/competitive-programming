#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int a,b;

    cin>>a>>b;

    for(int i=1;;i++){
        a*=3;
        b*=2;
        if(a>b){
            cout<<i;
            break;
        }
    }

    return 0;
}
