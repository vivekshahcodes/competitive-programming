#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b;

    cin>>a>>b;

    if(min(a,b)&1){
        cout<<"Akshat";
    }else{
        cout<<"Malvika";
    }

    return 0;
}
