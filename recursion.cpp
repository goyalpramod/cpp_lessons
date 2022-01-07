#include<iostream>
using namespace std;

int factorial(int a){
    if(a <= 1){
        return 1;
    }
    return a*factorial(a-1);
}

int fibo(int a){
    if (a <= 1){
        return 1;
    }
    return fibo(a-1) + fibo(a-2);
}

int main(){
    int a = 7;
    int ans = 0,base1 = 1, base2 = 1;
    if (a == 1 || a == 2){
        cout<<1<<endl;
    }else{
        for(int i = 2; i<a;i++){
            ans = base1 + base2;
            base1 = base2;
            base2 = ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}