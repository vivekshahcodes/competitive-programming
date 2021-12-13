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

        string s;

        cin>>s;

        int n = s.length();

        if((s[n-1]-'0')%2==0){
            cout<<0;
        }else if((s[0]-'0')%2==0){
            cout<<1;
        }else{
            bool flag = false;
            for(int i=0;i<n;i++){
                if((s[i]-'0')%2==0){
                    flag = true;
                    break;
                }
            }
            
            if(flag){
                cout<<2;
            }else{
                cout<<-1;
            }
        }

        cout<<"\n";
    }

    return 0;
}
