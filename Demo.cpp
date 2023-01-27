#include<iostream>
using namespace std;
class A
{
    public:
        int id;
        string name;
    public:
        void getdata()
        {
            cout<<"ENter the id"<<endl;
            cin>>id;
            cout<<"enter the name";
            cin>>name;
        }
};
class B:private A
{
    public:
        string dept;
    public:
        void getData()
        {
            getdata();
            cout<<"Enter the department";
            cin>>dept;
        }
        void displayData()
        {
            cout<<id;
            cout<<name;
            cout<<dept;
        }
    
        
};
int main()
{
    B obj;
    obj.getData();
    obj.displayData();
}