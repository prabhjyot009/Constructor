#include<iostream>
using namespace std;
class A
{
private:
    int num;
    char ch;
public:
    void set_setvalue(int num2,char ch)
    {

        this->num=num2;
        this->char=ch;
    }
    void display_values()
    {
        cout<<"The value of num is: "<<num2;
        cout<<"The value of char is: "<<ch;
    }
};
int main()
{
    A obj();
    obj.set_values(10,'abc');
    obj.display_values();
    return 0;
}
