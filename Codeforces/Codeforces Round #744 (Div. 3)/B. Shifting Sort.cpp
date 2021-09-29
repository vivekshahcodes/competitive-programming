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

        int a[n],b[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i] = a[i];
        }
        
        sort(b,b+n);

        vector<pair<pair<int,int>,int>> v;

        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                continue;
            }else{
                for(int j=i+1;j<n;j++){
                    if(a[j]==b[i]){
                        v.push_back({{i+1,j+1},j-i});
                        reverse(a+i,a+j);
                        reverse(a+i,a+j+1);
                    }
                }
            }
        }

        cout<<v.size()<<endl;

        for(auto i:v){
            cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
        }
    }

    return 0;
}
