#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,t,k,d;

    cin>>n>>t>>k>>d;

    int time1 = 0, time2 = d;

    int temp = 0;

    while(temp<n){
        temp += k;
        time1 += t;
    }

    temp = (d/t)*k;

    while(temp<n){
        temp += 2*k;
        time2 += t;
    }

    if(time1<=time2){
        cout<<"NO";
    }else{
        cout<<"YES";
    }

    return 0;
}
