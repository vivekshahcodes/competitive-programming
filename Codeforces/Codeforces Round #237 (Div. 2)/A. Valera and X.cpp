#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    set<char> s;
    set<char> x;
    set<char> y;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){

            char c;
            cin>>c;

            y.insert(c);
            
            if(i==j || i+j==n+1){
                x.insert(c);
            }else{
                s.insert(c);
            }
        }
    }

    if(s.size()==1 && x.size()==1 && y.size()==2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
