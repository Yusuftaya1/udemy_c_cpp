#include <iostream>

using namespace std;


void degerdegistir(int *sayi1 , int *sayi2){
    int temp;

    temp = *sayi1;
    *sayi1 = *sayi2;
    *sayi2 = temp;
}


int main(){
    int sayi = 10;
    int *sayi_adres = &sayi; 

    /*
    cout<<sayi_adres<<endl;
    cout<<*sayi_adres<<endl;
    cout<<*(sayi_adres+1)<<endl;
    cout<<sayi_adres+1<<endl;
    */
    int sayi1 = 1 , sayi2 = 4 ;

    degerdegistir(&sayi1,&sayi2);

    cout<<sayi1<<" "<<sayi2;

    return 0;
    
}