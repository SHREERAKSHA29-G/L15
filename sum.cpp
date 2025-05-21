#include<iostream>
using namespace std;
class second
{
    public:
    int a,b;
    void msg();
    void sum();
};
void second::msg()
{
    cout<<"Welcome to CPP world"<<endl;
}
void second::sum()
{
    cout<<"The sum is :"<<a+b<<endl;
}
int main()
{
    second s;
    cout<<"Enter a and b:";
    cin>>s.a>>s.b;
    s.msg();
 s.sum();
}
