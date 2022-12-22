#include<bits/stdc++.h>
using namespace std;
class Shop{
    int price[10];
    int counter,n;
    public:
        void setcount(){counter=0;}
        void setdata();
        void display();
};
void Shop::setdata(){
    cout<<"Enter the number of data you will set:";
    cin>>n;
    while(n--){
        cout<<"Enter the price of the item "<<counter+1<<" :"<<'\n';
        cin>>price[counter];
        counter++;
    }
} 
void Shop::display(){
    cout<<"The set prices are:"<<endl;
    for(int i=0;i<counter;i++){
        cout<<price[i]<<'\n';
    }
}
int main(){
    Shop n;
    n.setcount();
    n.setdata();
    n.display();
    return 0;
}