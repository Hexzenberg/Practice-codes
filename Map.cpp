#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;
    map<string,int>::iterator i=m.begin();
    m["Nikhil"]=1;
    for(i=m.begin();i!=m.end();i++){
        cout<<(*i).first<<' '<<(*i).second<<endl;
    }
    return 0;
}