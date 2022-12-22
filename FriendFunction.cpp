#include<bits/stdc++.h>
using namespace std;
class s{
	private:
		int a,b;
		friend void sum(s);
	public:
		void set(){
			int c,d;
			cin>>c>>d;
			a=c;
			b=d;
		}
};
void sum(s c){
	cout<<c.a+c.b<<endl;
}
int main(){
	s n;
	n.set();
	sum(n);
	return 0;
}