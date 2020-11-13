#include <iostream>
using namespace std;
main (){
    int ulang;
    cout<<"Maukan panjang:";
    cin>>ulang;

    for(int i=ulang; i>=2; i--){
        for(int j=i; j<=ulang; j++){
            cout<<" ";
        }
        for(int k=2;k<=i+(i-1);k++){
            if(k==2 || k==i+(i-1)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=2;i<=ulang;i++){
        for(int j=ulang;j>=i;j--){
            cout<<" ";
        }
        for(int k=2;k<=i+(i-1);k++){
            if(k==2 || k==i+(i-1)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
