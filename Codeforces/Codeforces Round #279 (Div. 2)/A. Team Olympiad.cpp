#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    vector<int> a,b,c;

    for(int i=1;i<=n;i++){
        int input;
        cin>>input;
        if(input==1){
            a.push_back(i);
        }else if(input==2){
            b.push_back(i);
        }else{
            c.push_back(i);
        }
    }

    int ans = min(a.size(),min(b.size(),c.size()));
    
    cout<<ans<<endl;

    if(ans==0){
        return 0;
    }

    for(int i=0;i<ans;i++){
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }

    return 0;
}
