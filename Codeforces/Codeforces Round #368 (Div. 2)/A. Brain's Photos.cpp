#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,m;

    cin>>n>>m;

    bool ans = true;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){

            char a;
            cin>>a;

            if(a=='C'||a=='M'||a=='Y'){
                ans = false;
            }
        }
    }

    if(ans){
        cout<<"#Black&White";
    }else{
        cout<<"#Color";
    }

    return 0;
}
