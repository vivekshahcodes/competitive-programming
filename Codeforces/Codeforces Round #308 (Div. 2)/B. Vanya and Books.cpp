#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll numberOfDigits(ll n){

    ll ans = 0;
    
    while(n!=0){
        n/=10;
        ans++;
    }

    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll arr[10] = {0};

    for(ll i=1;i<=9;i++){
        
        string a = "1";

        for(ll j=0;j<i-1;j++){
            a.push_back('0');
        }

        ll x = stoi(a);
        ll y = (x*10)-1;

        arr[i] = i*(y-x+1);
    }

    for(ll i=1;i<=9;i++){
        arr[i] += arr[i-1];
    }

    if(n==1e9){
        cout<<arr[9]+10;
        return 0;
    }

    ll digits = numberOfDigits(n);

    string temp;

    for(ll i=0;i<digits;i++){
        temp.push_back('9');
    }

    ll maxNum = stoi(temp);

    ll rem = (maxNum-n)*digits;

    cout<<arr[digits]-rem;

    return 0;
}
