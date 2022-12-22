#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    list<int>::iterator i=l.begin();
    l.push_back(7);
    l.push_back(78);
    for(i=l.begin();i!=l.end();i++){
        cout<<*i<<' ';
    }
    return 0;
}