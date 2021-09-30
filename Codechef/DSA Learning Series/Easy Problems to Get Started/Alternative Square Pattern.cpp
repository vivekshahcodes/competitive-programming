#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int curr = 1;

    for(int i=1;i<=n;i++){

        if(i&1){
            for(int j=1;j<=5;j++){
                cout<<curr<<" ";
                curr++;
            }

            curr += 4;

        }else{
            for(int j=1;j<=5;j++){
                cout<<curr<<" ";
                curr--;
            }

            curr += 6;
        }

        cout<<endl;
    }

    return 0;
}
