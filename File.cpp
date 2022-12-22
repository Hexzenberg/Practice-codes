#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,a,b;
    cout<<"Enter a string:\n";
    cin>>a;
    ofstream out("Filetoprint.txt");
    out<<"My name is: "+a;
    out.close();
    ifstream in("Filetoprint.txt");
    getline(in,s);
    cout<<s<<'\n';
    in.close();
    ifstream min("Filetoread.txt");
    while(min.eof()==0){
        getline(min,b);
        cout<<b<<endl;
    }
    return 0;
}