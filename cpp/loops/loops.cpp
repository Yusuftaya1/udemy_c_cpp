/*#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    int kontrol = 5;
    
    do{
        cout <<"before --" <<kontrol <<endl;
        kontrol--;
        cout <<"after --"<< kontrol <<endl;
    }
    while (kontrol > 0);
        cout << kontrol <<endl;
    
}
*/
/*
#include <algorithm>
#include <iostream>
#include <string>
 
int main()
{
    int j = 2;
    do{
        j += 2;
        std::cout << j << ' ';
    }

    while (j < 9);
        std::cout << '\n';
 

    std::string s = "aba";
    std::sort(s.begin(), s.end());

    do std::cout << s << '\n'; // expression statement is the loop body
    while (std::next_permutation(s.begin(), s.end()));
}
*/
#include <iostream>

using namespace std;
/*
int main (){

    int sayi;
    int teksayitoplam = 0;
    int ciftsayitoplam = 0;

    cout <<"sayi gir; ";
    cin >> sayi;

    do{
        if (sayi %2 == 0); ciftsayitoplam += sayi;

        else if(sayi%2 != 0); teksayitoplam += sayi;

        sayi --; 
    }
    while (sayi > 0);


    return 0;   

}*/

int main(){
    int i = 0;

    do{
        if(i==5){
            i++;
            break;
        }
        cout<<i<<"\n";
        i++;
    }
    while (i <10);
    

}