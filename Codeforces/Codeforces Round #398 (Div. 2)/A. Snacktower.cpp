#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    bool visited[n+1] = {false};

    int h = n;

    for(int i=0;i<n;i++){
        
        int input;
        cin>>input;

        visited[input] = true;

        while(h>=1 && visited[h]){
            cout<<h<<" ";
            h--;
        }

        cout<<endl;
    }

    return 0;
}
