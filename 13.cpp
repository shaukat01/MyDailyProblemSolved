#include<iostream>
using namespace std;


class Base_class{
    public:
    virtual void func()
    {
        cout<<"Base Class Function Called"<<endl;
    }
};

class Derived_class:public Base_class{
    public:
    void func()
    {
        cout<<"Derived Class Function Called"<<endl;
    }
};

int main()
{
    Base_class *base_ptr, base_object;
    Derived_class *derive_ptr, derive_object;

    //Trying to cast from derived to derived
    derive_ptr = dynamic_cast<Derived_class *> (&derive_object);
    if(derive_ptr) 
    {
        cout<<"Cast from Derived* to Derived* successful"<<endl;
        derive_ptr->func();
    }
    else
        cout<<"Cast from Derived* to Derived* failed"<<endl;

    //Trying to cast from derived to base
    base_ptr = dynamic_cast<Base_class  *> (&derive_object);
    if(base_ptr)
    {
        cout<<"Cast from Derived* to Base* successful"<<endl;
        base_ptr->func();
    }
    else
        cout<<"Cast from Derived* to Base* successful"<<endl;

    //Trying to cast from base to base
    base_ptr = dynamic_cast<Base_class *>(&base_object);
    if(base_ptr)
    {
    cout<<"Cast from Base* to Base* successful"<<endl;
    base_ptr->func();
    }
    else
    cout<<"Cast from Base* to Base* failed"<<endl;

    //Trying to cast from base to derived
    derive_ptr = dynamic_cast<Derived_class *> (&base_object);
    if(derive_ptr)
    cout<<"Cast from Base* to Derived* successful"<<endl;
    else
    cout<<"Cast from Base* to Derived* failed"<<endl;

    //Trying to cast base_ptr to Derived* with base_ptr holding derive_object
    base_ptr = &derive_object;
    derive_ptr = dynamic_cast<Derived_class *>(base_ptr);
    if(derive_ptr)
    cout<<"Casting base_ptr to Derived* succesfull because base_ptr holds derive_object"<<endl;
    else
    cout<<"Casting base_ptr to Derived* failed"<<endl;

    //Trying to cast base_ptr to Derived* but now base_ptr holding base_object
    base_ptr = &base_object;
    derive_ptr = dynamic_cast<Derived_class *>(base_ptr);
    if(derive_ptr)
    {
    cout<<"Casting base_ptr to Derived* succesfull"<<endl;
    derive_ptr->func();
    }
    else
    cout<<"Casting base_ptr to Derived* failed because base_ptr holds base_object"<<endl;

    //Trying to case derive_ptr to Base* with derive_ptr holding derive_object
    derive_ptr = &derive_object;
    base_ptr = dynamic_cast<Base_class *>(derive_ptr);
    if(base_ptr)
    {
    cout<<"Casting from derive_ptr to base_ptr succesfull"<<endl;
    base_ptr->func();
    }
    else
    cout<<"Casting from derive_ptr to base_ptr failed"<<endl;
    return 0;
}