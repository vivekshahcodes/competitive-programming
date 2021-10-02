#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isLucky(int n){

    int temp = n;

    while(temp!=0){
        if(abs(temp)%10==8){
            return true;
        }
        temp/=10;
    }

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int ans = 1;

    for(int i=n+1;i<n+20;i++){
        if(isLucky(i)){
            break;
        }
        ans++;
    }

    cout<<ans;

    return 0;
}
