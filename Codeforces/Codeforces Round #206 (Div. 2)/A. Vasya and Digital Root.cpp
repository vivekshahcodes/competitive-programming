#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,d;

    cin>>n>>d;

    if(n>1 && d==0){
        cout<<"No solution";
        return 0;
    }

    cout<<d;

    for(int i=1;i<n;i++){
        cout<<0;
    }

    return 0;
}
