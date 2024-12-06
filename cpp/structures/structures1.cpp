#include <iostream>

using namespace std;

struct Ogrenci{
    int numara;
    string isim;
    string soyisim;
};

void change_name(Ogrenci *ogrenci_ , string yeni_isim){
    ogrenci_->isim = yeni_isim;
}

void yeni_ogr(Ogrenci *yeni_ogrenci,int numara,string isim){
    yeni_ogrenci -> isim = isim;
    yeni_ogrenci -> numara = numara;
}

void cout_ogr(Ogrenci *ogr){
    cout<<ogr->isim<<endl;
}

int main(){
    /*
    Ogrenci ogr1;
    ogr1.numara = 1234;
    ogr1.isim = "yusuf";
    ogr1.soyisim = "taya";
    Ogrenci ogr2 = {1212,"ali","cetin"};
    cout<<ogr1.isim<<" "<<ogr2.isim;
    */

    Ogrenci ogr1,ogr2;

    yeni_ogr(&ogr1,1234,"Yusuf");
    yeni_ogr(&ogr2,1212,"Kaan");

    cout_ogr(&ogr2);

    cout<<ogr1.isim<<" "<< ogr2.isim;


    return 0;
}
