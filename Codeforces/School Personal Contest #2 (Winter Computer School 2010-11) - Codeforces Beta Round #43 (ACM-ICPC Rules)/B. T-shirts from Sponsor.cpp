#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[5];

    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    map<string,int> m;

    m["S"] = 0;
    m["M"] = 1;
    m["L"] = 2;
    m["XL"] = 3;
    m["XXL"] = 4;

    int q;

    cin>>q;

    while(q--){

        string s;
        cin>>s;

        int x = m[s];

        if(a[x]>0){
            cout<<s<<endl;
            a[x]--;
        }else{
            int curr = 1;
            bool flag = true;

            while(x<0 || x>4 || a[x]==0){

                if(flag){
                    x+=curr;
                    curr++;
                    flag = false;
                }else{
                    x-=curr;
                    curr++;
                    flag = true;
                }
            }

            a[x]--;

            for(auto i:m){
                if(i.second==x){
                    cout<<i.first<<endl;
                }
            }
        }

    }

    return 0;
}
