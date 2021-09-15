#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a,b;

    cin>>a>>b;

    int x = b[0]-a[0], y = b[1]-a[1];

    vector<string> ans;

    while(x!=0 || y!=0){

        if(x>0){
            if(y>0){
                ans.push_back("RU");
                x--;
                y--;
            }else if(y<0){
                ans.push_back("RD");
                x--;
                y++;
            }else{
                ans.push_back("R");
                x--;
            }
        }else if(x<0){
            if(y>0){
                ans.push_back("LU");
                x++;
                y--;
            }else if(y<0){
                ans.push_back("LD");
                x++;
                y++;
            }else{
                ans.push_back("L");
                x++;
            }
        }else{
            if(y>0){
                ans.push_back("U");
                y--;
            }else{
                ans.push_back("D");
                y++;
            }
        }
    }

    cout<<ans.size()<<endl;

    for(string i:ans){
        cout<<i<<endl;
    }

    return 0;
}
