#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isTaxi(string s){

    if(s[0]==s[1] && s[1]==s[3] && s[3]==s[4] && s[4]==s[6] && s[6]==s[7]){
        return true;
    }

    return false;
}

bool isPizza(string s){

    if(s[0]>s[1] && s[1]>s[3] && s[3]>s[4] && s[4]>s[6] && s[6]>s[7]){
        return true;
    }

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    map<string,pair<pair<int,int>,int>> m;

    int maxTaxi = 0, maxPizza = 0, maxGirls = 0;

    string a[n];

    for(int i=0;i<n;i++){

        int x;
        cin>>x;

        cin>>a[i];

        int taxi = 0, pizza = 0, girls = 0;

        for(int i=0;i<x;i++){

            string str;

            cin>>str;

            if(isTaxi(str)){
                taxi++;
            }else if(isPizza(str)){
                pizza++;
            }else{
                girls++;
            }

        }

        maxTaxi = max(maxTaxi,taxi);
        maxPizza = max(maxPizza,pizza);
        maxGirls = max(maxGirls,girls);

        m[a[i]] = {{taxi,pizza},girls};

    }

    vector<string> t,p,g;

    for(int i=0;i<n;i++){
        if(m[a[i]].first.first==maxTaxi){
            t.push_back(a[i]);
        }

        if(m[a[i]].first.second==maxPizza){
            p.push_back(a[i]);
        }

        if(m[a[i]].second==maxGirls){
            g.push_back(a[i]);
        }
    }

    cout<<"If you want to call a taxi, you should call: ";

    for(int i=0;i<t.size()-1;i++){
        cout<<t[i]<<", ";
    }

    cout<<t[t.size()-1]<<".";

    cout<<endl;

    cout<<"If you want to order a pizza, you should call: ";

    for(int i=0;i<p.size()-1;i++){
        cout<<p[i]<<", ";
    }

    cout<<p[p.size()-1]<<".";

    cout<<endl;

    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";

    for(int i=0;i<g.size()-1;i++){
        cout<<g[i]<<", ";
    }

    cout<<g[g.size()-1]<<".";
    
    return 0;
}
