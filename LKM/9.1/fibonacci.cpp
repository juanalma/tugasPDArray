#include <iostream>

using namespace std;

main(){
    int n, prev1, prev2;
    cout<<"Masukkan jumlah angka : ";
    cin>>n;
    int fibo[n];

    for(int a=0; a<n; a++){
        if(a == 0){
            prev1 = 0;
            fibo[a] = 0;
        }else if(a ==1){
            prev2 = 1;
            fibo[a] = 1;
        }else {
            fibo[a] = prev1+prev2;
            prev1 = prev2;
            prev2 = fibo[a];
        }
    }

    for(int a=0; a<10; a++){
        cout<<fibo[a]<<" ";
    }
}

