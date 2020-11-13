#include <iostream>

using namespace std;

main() {
    int ulang;
    cout<<"Masukkan panjang : ";
    cin>>ulang;

    for(int a=1; a<=ulang; a++){
        for(int i=1; i<=ulang; i++){
            cout<<"*";
        }
        cout<<endl;
    }
}
