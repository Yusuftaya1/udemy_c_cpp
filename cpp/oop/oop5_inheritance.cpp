#include <iostream>
using namespace std;

class takim{
private:
    string isim;
    int kurulus_yil;

public:
    void setter(string isim, int kurulus_yil){
        this->isim = isim;
        this->kurulus_yil = kurulus_yil;
    }

    string getisim(){
        return isim;
    }
};

class Futbolcu : public takim{
private:
    string isim;
    int dogumYili;

public:
    Futbolcu(string isim , int dogumYili){
        this->isim = isim;
        this->dogumYili = dogumYili;
    }

    void set_isim(string isim){
        this->isim = isim;
    }

    string get_isim(){
        return isim;
    }

};


int main(){
    Futbolcu f1("Yusuf",2001);
    takim *f1takim;
    f1takim = &f1;

    f1takim->setter("asd",1234);

    cout<<f1.get_isim()<< f1takim->getisim() <<endl;

}