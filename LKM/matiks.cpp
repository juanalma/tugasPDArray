#include <iostream>

using namespace std;

main(){
    int el[10][10], tran[10][10], jum[10][10];

    for(int a=1; a<=3; a++){
        for(int i=1; i<=3; i++){
            cout<<"Masukkan elemen a"<<a<<i<<" : ";
            cin>>el[a][i];
        }
    }

    for(int a=1; a<=3; a++){
        for(int i=1; i<=3; i++){
            cout<<el[a][i]<<" ";
        }
        cout<<endl;
    }
    cout<<"--------------"<<endl;
    cout<<"Transpose"<<endl;
    cout<<"--------------"<<endl;

    for(int a=1; a<=3; a++){
        for(int i=1; i<=3; i++){
            tran[a][i] = el[i][a];
        }
    }

    for(int a=1; a<=3; a++){
        for(int i=1; i<=3; i++){
            cout<<tran[a][i]<<" ";
        }
        cout<<endl;
    }

    cout<<"--------------"<<endl;
    cout<<"Penjumlahan"<<endl;
    cout<<"--------------"<<endl;

    for(int a=1; a<=3; a++){
        for(int i=1; i<=3; i++){
            jum[a][i] = tran[a][i]+el[a][i];
        }
    }

    for(int a=1; a<=3; a++){
        for(int i=1; i<=3; i++){
            cout<<jum[a][i]<<" ";
        }
        cout<<endl;
    }
}
