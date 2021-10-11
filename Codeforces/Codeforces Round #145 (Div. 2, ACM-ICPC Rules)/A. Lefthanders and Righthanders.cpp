#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    string s;

    cin>>s;

    for(int i=0;i<n/2;i++){
        if(s[i]==s[i+(n/2)] || s[i]=='L'){
            cout<<i+1<<" "<<i+(n/2)+1<<endl;
        }else{
            cout<<i+(n/2)+1<<" "<<i+1<<endl;
        }
    }

    return 0;
}
