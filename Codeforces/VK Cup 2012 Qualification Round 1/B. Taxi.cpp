#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    unordered_map<int,int> m;

    for(int i=0;i<n;i++){

        int input;
        cin>>input;
        m[input]++;
    }

    int ans = m[4];
    int temp = min(m[3],m[1]);
    ans += temp;
    m[3] -= temp;
    m[1] -= temp;
    temp = m[2]/2;
    ans += temp;
    m[2] -= temp*2;
    temp = min(m[1]/2,m[2]);
    ans += temp;
    m[1] -= temp*2;
    m[2] -= temp;
    temp = min(m[1],m[2]);
    ans += temp;
    m[1] -= temp;
    m[2] -= temp;
    temp = m[1]/4;
    ans += temp;
    m[1] -= temp*4;
    temp = m[1]/3;
    ans += temp;
    m[1] -= temp*3;
    temp = m[1]/2;
    ans += temp;
    m[1] -= temp*2;
    ans += m[1] + m[2] + m[3];

    cout<<ans;

    return 0;
}
