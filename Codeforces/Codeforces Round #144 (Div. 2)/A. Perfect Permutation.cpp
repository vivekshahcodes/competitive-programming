#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    if(n&1){
        cout<<-1;
    }else{
        for(int i=1;i<=n-1;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
    }

    return 0;
}
