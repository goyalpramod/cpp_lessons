#include<iostream>
using namespace std;

template<class T1, class T2>
float avg(T1 a,T2 b){
    float av = (a+b)/2.0;
    return av;
}

int main(){
    float ans = avg(5,2.7);
    cout<<"The answer is "<<ans;
    return 0;
}