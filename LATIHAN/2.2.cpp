#include <iostream>

using namespace std;

main(){
    int angka, prev1, prev2, a=0, i=0;
    cin>>angka;
    int fibo[angka];

    while(a < angka){
        if(i == 0){
            prev1 = 0;
            fibo[i] = prev1;
        } else if(i == 1){
            prev2 = 1;
            fibo[i] = prev2;
        }else {
            fibo[i] = prev1+prev2;
            prev1 = prev2;
            prev2 = fibo[i];
        }
        a=fibo[i];
        i++;
    }

    for(int j=0; j<i; j++){
        cout<<fibo[j]<<" ";
    }
}
