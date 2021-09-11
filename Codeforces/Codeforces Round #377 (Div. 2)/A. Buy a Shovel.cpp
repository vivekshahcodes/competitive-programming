#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k,i;

    cin>>n>>k;

    for(i=1;i<=10;i++){
        int temp = n*i;
        if(temp%10==0 || temp%10==k){
            break;
        }
    }

    cout<<i;

    return 0;
}
