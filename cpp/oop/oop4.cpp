#include <iostream>
using namespace std;

class A { //her yerden ulaşılır 
public:
    int x;
};

class B{ 
protected: // kalıtım aldığı classtan ulaşılır
    int y;

};

class C{
private: //sadece kendi classı içinden ulasşılır (setter)
    int z;
public:
    void set_z(int z){
        this->z=z;
    }

    void getz(){
        cout<<z<<endl;
    }
};

class D: public A , public B , public C{
public:
    D(){
        y = 13;
    }

    void gety(){
        cout<<y<<endl;
    }

};

int main(){
    D d1;
    d1.x = 10;
    d1.gety();
    d1.set_z(8);
    d1.getz();
}