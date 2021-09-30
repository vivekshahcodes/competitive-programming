#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;

    for(int i=0;i<3;i++){

        int input;
        cin>>input;
        v.push_back(input);

    }

    sort(v.begin(),v.end());

    if(v[0]+v[1]<=v[2]){
        cout<<-1;
    }else if(v[0]!=v[1] && v[1]!=v[2] && v[2]!=v[0]){
        cout<<3;
    }else if(v[0]==v[1] && v[1]==v[2]){
        cout<<1;
    }else{
        cout<<2;
    }

    return 0;
}
