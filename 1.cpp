#include<iostream>
using namespace std;
class wall
{
public:
    int length;
    wall()
    {
        length=5;
        cout<<"Create a Wall.";
        cout<<"\n Length= "<<length;
    }
};
int main()
{
    wall wall1;
    return 0;
}
