#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    string s;

    cin>>s;

    string a[] = {"RBG","RGB","BRG","BGR","GRB","GBR"};

    int x = (n+2)/3;
    int m = INT_MAX;
    string ans;

    for(int i=0;i<6;i++){

        string temp = a[i];
        string curr;

        for(int i=0;i<x;i++){
            curr+=temp;
        }

        int c = 0;

        for(int i=0;i<n;i++){
            if(s[i]!=curr[i]){
                c++;
            }
        }

        if(c<m){
            m = c;
            ans = curr;
        }
    }

    cout<<m<<"\n";

    for(int i=0;i<n;i++){
        cout<<ans[i];
    }

    return 0;
}
