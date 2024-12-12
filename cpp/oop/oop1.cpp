#include <iostream>
using namespace std;


class Insan{
    public:
    string isim;
    string renk;
    int yas;
    
    void isim_soyle(){
        cout<<isim<<" "<<yas;
    }

};


int main(){
    Insan insan1;

    insan1.isim = "yusuf";
    insan1.renk = "kahve";
    insan1.yas = 24;
    insan1.isim_soyle();
}


