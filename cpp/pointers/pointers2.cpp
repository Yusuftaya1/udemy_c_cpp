#include <iostream>
#include <string.h>

using namespace std;

int main(){

    // C
    /*
    char isim[10] = "ASDFGH";

    char *isimadres  = isim;
    char *isimadres2 = &isim[0];

    cout<<*isimadres << " " << *isimadres2;
    for(int i = 0;i<strlen(isim);i++){
        cout << *(isimadres+i)<<endl;
    }

    for(int i = 0;i<strlen(isim);i++){
        cout << isim[i]<<endl;
    }
    */

    string takimlar[] = {"asd","fgh","jkl","esra"};
    string *takim_adres = takimlar;

    cout<<takim_adres<<endl;
    cout<<*takim_adres<<endl; //sadece ilk değer asd gelir çünkü o adres tutulur

    for(int i = 0;i<4;i++){
        cout << *(takim_adres+i)<<endl;
    }

    return 0;
}   