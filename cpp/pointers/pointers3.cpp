#include <iostream>
#include <string.h>

using namespace std;

void eleman_goruntule(int *dizi_adres , int dizi_boyut){
    cout<<dizi_adres<<" show";
    for(int i=0;i<dizi_boyut;i++){
        cout<<dizi_adres[i]<<endl;
    }   
}

void eleman_arttir(int *dizi_adres , int miktar){
    cout<<dizi_adres<<" ++++"<<endl;
    for(int i=0;i<4;i++){
        dizi_adres[i] += miktar;
    } 
}

void eleman_azalt(int *dizi_adres , int miktar){
    cout<<dizi_adres<<" -----"<<endl;
    for(int i=0;i<4;i++){
        dizi_adres[i] -= miktar;
    } 
}

int main(){
    int sayilar[] = {5,10,14,25};
    cout<<&sayilar<<" main"<<endl;
    cout<<sayilar<<" mainsss"<<endl;
    cout<<*sayilar<<" main"<<endl;

    eleman_goruntule(sayilar,4);
    eleman_arttir(sayilar,4);
    eleman_goruntule(sayilar,4);
    eleman_azalt(sayilar,5);
    eleman_goruntule(sayilar,4);
    return 0;
}