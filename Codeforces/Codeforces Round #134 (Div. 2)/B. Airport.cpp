#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    priority_queue<int> p;
    priority_queue<int,vector<int>,greater<int>> q;

    for(int i=0;i<k;i++){
        int input;
        cin>>input;
        p.push(input);
        q.push(input);
    }

    int i = 0;
    int ma = 0;

    while(!p.empty() && i<n){
        
        int x = p.top();
        ma += x;
        p.pop();
        if(x>1){
            p.push(x-1);
        }
        i++;
    }

    i = 0;
    int mi = 0;

    while(!q.empty() && i<n){

        int x = q.top();
        mi += x;
        q.pop();
        if(x>1){
            q.push(x-1);
        }
        i++;
    }

    cout<<ma<<" "<<mi;

    return 0;
}
