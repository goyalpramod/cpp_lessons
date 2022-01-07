#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id = a;
            price = b;
        }

        void getData(){
            cout<<"The id of the item is "<<id<<endl;
            cout<<"The price of the item is "<<price<<endl;
        }
};

int main(){
    int p;
    float q;
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the price and the id of item "<<i+1<<endl;
        cin>>q>>p;
        ptr->setData(p,q);
        ptr++;
    }
    
    for (int j = 0; j < size; j++)
    {
        cout<<"Item: "<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}