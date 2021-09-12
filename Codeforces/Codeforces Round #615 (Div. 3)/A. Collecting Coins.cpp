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

        int a,b,c,d;

        cin>>a>>b>>c>>d;

        if((a+b+c+d)%3==0){

            int x = (a+b+c+d)/3;

            if(a>x || b>x || c>x){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }

        }else{
            
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
