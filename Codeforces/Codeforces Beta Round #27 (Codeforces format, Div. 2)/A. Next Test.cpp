#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    set<int> s;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        s.insert(input);
    }

    for(int i=1;i<=3001;i++){
        if(!binary_search(s.begin(),s.end(),i)){
            cout<<i;
            break;
        }
    }

    return 0;
}
