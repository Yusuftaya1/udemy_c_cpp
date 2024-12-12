#include <iostream>
using namespace std;


template<class Donustipi>

Donustipi toplama(Donustipi sayi1, Donustipi sayi2){

    return sayi1 + sayi2;
}

int main(){

    cout<<toplama<int>(10,21)<<endl;
    cout<<toplama<float>(5.2,6.4)<<endl;
}