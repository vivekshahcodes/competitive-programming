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

        int a[3], m = 0, me = 0;

        for(int i=0;i<3;i++){
            cin>>a[i];
            m = max(m,a[i]);
        }

        for(int i=0;i<3;i++){
            if(a[i]==m){
                me++;
            }
        }

        if(m==0){
            cout<<1<<" "<<1<<" "<<1<<endl;
        }else{
            for(int i=0;i<3;i++){
                if(a[i]==m && me==1){
                    a[i] = 0;
                }else{
                    a[i] = m-a[i]+1;
                }
            }

            cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        }
    }

    return 0;
}
