#include<iostream>
using namespace std;
class employee
{
    public:
    char emp_name[20];
    int basic_salary;
    float net_salary,da,it,gross_salary;
    void put_details()
    {
        cout<<"\n   !!!!!!!!!!!!!!!!!!!!!!!!   \n";
        cout<<"\nEnter employee name: ";
              cin>>emp_name;
        cout<<"\nEnter basic salary: ";
              cin>>basic_salary;
    }
    float net_salary1()
    {
        da=basic_salary*0.52;
        gross_salary=basic_salary+da;
        it=gross_salary+0.30;
        net_salary=(basic_salary+da)-it;
    }
    void display()
    {
        cout<<"\n   ********   \n";
        cout<<"\nEmployee name is: "<<emp_name;
        cout<<"\n\nEmployee basic salary is: "<<basic_salary;
        cout<<"\n\nEmployee net salary: "<<net_salary;
    }
};
int main()
{
    employee obj;
    obj.put_details();
    obj.net_salary1();
    obj.display();
    return 0;
}