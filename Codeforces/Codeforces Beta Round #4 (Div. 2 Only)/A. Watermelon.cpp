#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    if(n>2 && !(n&1)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
