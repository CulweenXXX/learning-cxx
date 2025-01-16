#include <iostream>

struct A
{
    int a;
    A(int a):a(a){
        std::cout<<"Construct A"<<"("<<a<<")"<<std::endl;
    }
    ~A(){
        std::cout<<"Detruct A"<<std::endl;
    }
};

struct B : public A
{
    /* data */
    int b;
    B(int b):b(b),A(10){
        std::cout<<"Construct B"<<"("<<b<<")"<<std::endl;
    }

    ~B(){
        std::cout<<"Detruct B"<<std::endl;
    }
};

int main(){
    A* a = new A(1);
    delete a;
    std::cout<<std::endl<<"----------------------"<<std::endl<<std::endl;
    B* b = new B(2);
    delete b;

    return 0;
}

