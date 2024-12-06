#include <iostream>
#include <string.h>

using namespace std;

void sayi_degistir(int *x , int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp; 
}

void sayi_degistir_w_referance(int &x , int &y){
    int temp;
    temp = x;
    x=y;
    y=temp; 
}

void aralikbastir(int *x, int *y){
    for (; x != y; x++){
        cout<<*x<<endl;
    }
    
}

int main(){
    /*
    int sayi1 = 55, sayi2 = 56;
    const int sayi3 = 23;
    cout<<sayi1<<" "<<sayi2<<endl;
    sayi_degistir(&sayi1 , &sayi2);
    sayi_degistir_w_referance(sayi1,sayi2);
    cout<<sayi1<<" "<<sayi2<<endl;
    */
    int sayilar[] = {1,2,3,4,5,6};
    aralikbastir(sayilar+1,sayilar+4);

}