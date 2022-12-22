#include <iostream>
using namespace std;
class getnum
{
private:
    int a, b;

public:
    int e, f;
    void num(int c, int d);
    void printnum()
    {
        cout << a << " " << b << " " << e << " " << f;
    }
};
void getnum::num(int c, int d)
{
    a = c;
    b = d;
}
int main()
{
    getnum x;
    x.e = 10;
    x.f = 40;
    x.num(20, 30);
    x.printnum();
    return 0;
}