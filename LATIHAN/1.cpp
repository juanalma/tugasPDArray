#include <iostream>
#include <string>

using namespace std;

main() {
    int n_mhs;
    cout<<"Masukkan banyak mahasiswa: ";
    cin>>n_mhs;

    int nilai_mhs[n_mhs];
    string nama_mhs[n_mhs], status[n_mhs];

    for(int a=0; a<n_mhs; a++){
        cout<<"Masukkan nama mahasiswa #"<<a+1<<" : ";
        cin>>nama_mhs[a];
        cout<<"Masukkan nilainya : ";
        cin>>nilai_mhs[a];
        if(nilai_mhs[a] > 50){
            status[a] = "LULUS";
        }else {
            status[a] = "TIDAK LULUS";
        }
    }
    cout<<endl;
    cout<<"==============================="<<endl;
    cout<<"            HASIL"<<endl;
    cout<<"==============================="<<endl;

    cout<<endl;

    for(int a=0; a<n_mhs; a++){
        cout<<"Nama : "<<nama_mhs[a]<<endl;
        cout<<"Nilai : "<<nilai_mhs[a]<<endl;
        cout<<"Status : "<<status[a]<<endl;
        cout<<"==============================="<<endl;
    }



}
