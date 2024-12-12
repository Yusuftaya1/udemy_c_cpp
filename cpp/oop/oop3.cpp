#include <iostream>
using namespace std;

class Ogrenci{
    private:
    string isim;
    int numara;

    public:
    Ogrenci(string isim , int numara){
        this->isim = isim;
        this->numara = numara;
    }
    
    ~Ogrenci(){
        cout<<"deleted"<<endl;
    }

    void setIsim(string yazilacak_isim){
        isim = yazilacak_isim;
    }
    
    void setNumara(int yazilacak_numara){
        numara = yazilacak_numara;
    }
    
    void bilgi_goster(){
        cout<<"Isim: "<<isim<<endl;
        cout<<"Numara: "<<numara<<endl;
    }

    string getIsim(){
        return isim;
    }

    int getNumara(){
        return numara;
    }
};

int main(){
    Ogrenci ogr1("asddd",124);
    ogr1.bilgi_goster();


    /*
    Ogrenci *ogr1 = new Ogrenci();
    ogr1->setIsim("asd");
    ogr1->setNumara(123);
    
    cout<<ogr1->getIsim()<<" "<<ogr1->getNumara()<<endl;
    */
    /*
    Ogrenci ogr1;
    ogr1.setIsim("NAme");
    ogr1.setNumara(123);
    cout<<ogr1.getIsim()<<" "<<ogr1.getNumara()<<endl;
    */

    return 0;
}