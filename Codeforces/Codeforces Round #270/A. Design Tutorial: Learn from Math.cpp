#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    if(n&1){
        cout<<9<<" "<<n-9;
    }else{
        cout<<4<<" "<<n-4;
    }

    return 0;
}
