#include <iostream>

using namespace std;

int main(){

    if(4>2); cout << "aads" << endl;  

    int donus_yon = 2;
    char yon = 'R'; 

    switch (donus_yon)
    {
    case 1:
        cout<<"saga"<<endl;
        break;
    
    case 2:
        cout<<"sola"<<endl;
        break;

    default:
        cout<<"ileri"<<endl;
        break;
    }


    switch (yon)
    {
    case 'R':
        cout<<"saga_char"<<endl;
        break;
    
    case 'L':
        cout<<"sola_char"<<endl;
        break;

    default:
        cout<<"ileri_char"<<endl;
        break;
    }
    return 0;
}