#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    map<int,int> m;
    bool ans = true;

    for(int i=0;i<n;i++){

        int input;
        cin>>input;

        m[input]++;

        if(m[input]>(n+1)/2){
            ans = false;
        }
    }

    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
