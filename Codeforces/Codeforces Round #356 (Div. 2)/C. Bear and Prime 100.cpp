#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(int n){

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v,ps;

    for(int i=2;i<=50;i++){
        if(isPrime(i)){
            v.push_back(i);
            if(i*i<=100){
                ps.push_back(i*i);
            }
        }
    }

    int ans = 0;

    for(int i=0;i<ps.size();i++){
        cout<<ps[i]<<endl;
        string s;
        cin>>s;
        if(s=="yes"){
            ans++;
        }
    }

    if(ans>=1){
        cout<<"composite"<<endl;
        return 0;
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
        string s;
        cin>>s;
        if(s=="yes"){
            ans++;
        }
    }

    if(ans>1){
        cout<<"composite"<<endl;
    }else{
        cout<<"prime"<<endl;
    }

    return 0;
}
