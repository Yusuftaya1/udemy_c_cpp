#include <iostream>

using namespace std;
int main(){
    /*
    string isimler[3];

    for(int i = 0;i<3;i++){
        cin>>isimler[i];
    }

    for(int i = 0;i<3;i++){
        cout<<isimler[i]<<endl;
    }
    */
    int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
   
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<matris[i][j]<<endl;
        }
   }

}