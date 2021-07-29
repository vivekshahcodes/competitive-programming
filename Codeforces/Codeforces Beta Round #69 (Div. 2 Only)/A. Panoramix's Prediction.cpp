#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(int n){
    if(n==2){
        return true;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int n,m;

    cin>>n>>m;

    n++;

    while(!isPrime(n)){
        n++;
    }

    if(n==m){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
