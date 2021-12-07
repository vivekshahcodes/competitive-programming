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

        int n;

        cin>>n;

        string s;

        cin>>s;

        bool one = false;

        string a,b;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                a.push_back('0');
                b.push_back('0');
            }else if(s[i]=='1' && !one){
                a.push_back('1');
                b.push_back('0');
                one = true;
            }else if(s[i]=='1'){
                a.push_back('0');
                b.push_back('1');
            }else if(one){
                a.push_back('0');
                b.push_back('2');
            }else{
                a.push_back('1');
                b.push_back('1');
            }
        }

        cout<<a<<endl<<b<<endl;
    }

    return 0;
}
