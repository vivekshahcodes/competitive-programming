#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string a,b;

    cin>>a>>b;

    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            cout<<1;
        }else{
            cout<<0;
        }
    }

    return 0;
}
