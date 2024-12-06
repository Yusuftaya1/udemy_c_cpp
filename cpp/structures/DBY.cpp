#include <iostream>

using namespace std;



int main(){
    int *adres =  new int;
    *adres = 10;
    delete adres;
    adres = nullptr;
    
}