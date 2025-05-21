#include<iostream>
using namespace std;
class second
{
    public:
    int x,y;
    void msg();
    void sum();
};
void second::msg()
{
    cout<<"Welcome to CPP world"<<endl;
}
void second::sum()
{
    cout<<"The sum is :"<<x+y<<endl;
}
int main()
{
    second s;
    cout<<"Enter x and y:";
    cin>>s.x>>s.y;
    s.msg();
 s.sum();
}
