#include <iostream>
using namespace std;
class A
{
    int a=10;
    public:
    friend void display();
};
void display()
    {
        A obj;
        cout<<"a = "<<obj.a<<endl;
    }
int main()
{
    display();
    return 0 ;
}