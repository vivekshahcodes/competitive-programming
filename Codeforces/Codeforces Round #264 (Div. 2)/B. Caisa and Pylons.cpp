#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int energy = 0, ans = 0, prev = 0;

    for(int i=0;i<n;i++){
        
        int input;
        cin>>input;

        energy += prev-input;
        if(energy<0){
            ans += abs(energy);
            energy = 0;
        }

        prev = input;

    }

    cout<<ans;

    return 0;
}
