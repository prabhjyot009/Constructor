#include<iostream>
using namespace std;

class prime
{
    int x;
    public:
    prime()
    {
        cout<<"Enter a number: ";
        cin>>x;
    }
    void display()
    int i,count;
    for(i=0;i>n;i++)
    {
        if(x/i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    cout<<"prime no.";
    else
    cout<<"not prime";
};
int main()
{
    prime obj;
    obj.display();
    return 0;
}