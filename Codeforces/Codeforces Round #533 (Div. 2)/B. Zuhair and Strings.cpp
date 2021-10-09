#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int fans = 0;

    for(char curr = 'a'; curr <= 'z'; curr ++){

        int c = 0, ans = 0;

        for(int i=0;i<n;i++){
            if(s[i]==curr){
                c++;
            }else{
                c = 0;
            }

            if(c>=k && c%k==0){
                ans++;
            }
        }

        fans = max(ans,fans);
    }

    cout<<fans;

    return 0;
}
