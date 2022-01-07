#include<iostream>
#include<math.h>
using namespace std;

int convertToBinary(int n){
    int d=0,i=0;
    while(n>0){
        int r=n%2;
        n=n/2;
        d+=r*pow(10,i);
        i++;
    }
    return d;
}

int main(void){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int m = convertToBinary(n);
    cout<<"the number in binary is "<<m<<endl;
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);

    convertToBinary(n);

    return 0;
}