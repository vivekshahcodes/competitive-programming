#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    if(n%5==0 || n%6==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
