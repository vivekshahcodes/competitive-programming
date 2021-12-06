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

        map<int,int> m,m2;
        int x = -1;

        for(int i=1;i<=n;i++){

            bool flag = false;

            int p;
            cin>>p;

            for(int j=0;j<p;j++){
                int input;
                cin>>input;
                if(m2[input]==0 && m[i]==0){
                    m2[input] = 1;
                    m[i] = input;
                    flag = true;
                }
            }

            if(!flag){
                x = i;
            }
        }

        bool optimal = true;

        int a,b;

        if(x!=-1){
            for(int i=1;i<=n;i++){
                if(m2[i]==0){
                    optimal = false;
                    a = x;
                    b = i;
                    break;
                }
            }
        }

        if(optimal){
            cout<<"OPTIMAL"<<endl;
        }else{
            cout<<"IMPROVE"<<endl;
            cout<<a<<" "<<b<<endl;
        }
    }

    return 0;
}
