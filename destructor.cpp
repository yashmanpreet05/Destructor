#include<iostream>
using namespace std;
int count =0;
class demo
{
    int a;
    public:
    demo()
    {
        count++;
        cout<<"\n object created :"<<count;
    }
    ~demo()
    {
        count--;
        cout<<"\n 
        object is deleted:"<<count;
    }
};
int main()
{
    demo a,b,c;
    {
        demo d;
    }
    return 0;
}