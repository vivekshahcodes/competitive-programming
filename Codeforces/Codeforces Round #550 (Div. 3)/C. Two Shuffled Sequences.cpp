#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    map<int,int> m;

    bool ans = true;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        m[input]++;
        if(m[input]>2){
            ans = false;
        }
    }

    if(ans){
        cout<<"YES"<<endl;

        vector<int> a,b;

        for(auto i:m){

            if(i.second>=1){
                a.push_back(i.first);
            }

            if(i.second==2){
                b.push_back(i.first);
            }
        }

        cout<<a.size()<<endl;

        for(auto i:a){
            cout<<i<<" ";
        }

        cout<<endl;

        cout<<b.size()<<endl;

        for(int i=b.size()-1;i>=0;i--){
            cout<<b[i]<<" ";
        }

    }else{
        cout<<"NO";
    }

    return 0;
}
