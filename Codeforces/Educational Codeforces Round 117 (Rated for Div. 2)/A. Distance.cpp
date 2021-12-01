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

        int x,y;

        cin>>x>>y;

        int total = x+y;

        if(total&1){
            cout<<-1<<" "<<-1<<endl;
        }else{
            if(x<=y){
                cout<<x<<" "<<(total/2)-x<<endl;
            }else{
                cout<<(total/2)-y<<" "<<y<<endl;
            }
        }
    }

    return 0;
}
