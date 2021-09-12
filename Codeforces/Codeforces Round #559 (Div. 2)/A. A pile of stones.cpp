#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int curr = 0;

    string s;

    cin>>s;

    for(int i=0;i<n;i++){
        if(s[i]=='-'){
            if(curr>0){
                curr--;
            }
        }else{
            curr++;
        }
    }

    cout<<curr;

    return 0;
}
