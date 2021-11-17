#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        int a,b;

        cin>>a>>b;

        if((a*b)%3==0){
            cout<<(a*b)/3<<endl;
        }else{
            cout<<(a*b)/3 + 1<<endl;
        }
    }

    return 0;
}
