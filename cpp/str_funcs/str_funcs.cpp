#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string isim1;
    string isim2("asd");
    string isim3;

    //getline(cin,isim1); //arada boşluk olan ifadeyi alır;

    isim3.assign(isim2); //isim3 e isim2 yi atar
    isim3.assign("ifad");

    cout<<isim3.at(3); //3. indisteki karakteri al

    isim1.length() //uzunluk bulma

    isim1.substr(5,7); //5.indisten 7 karakter yazdır

    isim1.swap(isim2); //isim1 i isim2 ye atar

    isim1.erase(3,2); //3.indisten başla 3 elemanı sil

    isim1.find("d"); //str içinde d yi bul return:index

    isim1.rfind("d"); // tersten bulur

    isim1.replace(0 , 4 ,"Fat");
}