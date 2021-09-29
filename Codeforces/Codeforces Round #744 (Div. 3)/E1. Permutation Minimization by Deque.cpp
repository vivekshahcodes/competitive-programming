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

        deque<int> d;

        for(int i=0;i<n;i++){
            int input;
            cin>>input;
            if(d.empty()){
                d.push_back(input);
            }else{
                if(input<d.front()){
                    d.push_front(input);
                }else{
                    d.push_back(input);
                }
            }
        }

        for(auto i:d){
            cout<<i<<" ";
        }

        cout<<endl;
    }

    return 0;
}
