//create a function that takes two points and calculate the distance between them.
#include<bits/stdc++.h>
using namespace std;
class point{
    int a,b;
    friend int distance(point);
    public:
    point();
};
point::point(){
    int c,d;
    cin>>c>>d;
    a=c;
    b=d;
}
int distance(point c){
    cout<<"The distance between the points is:"<<sqrt((c.a*c.a)-(c.b*c.b));
}
int main(){
    point x;
    distance(x);
    return 0;
}