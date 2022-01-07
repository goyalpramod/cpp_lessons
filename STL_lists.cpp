#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l){
    list<int> :: iterator it;
    for(it = l.begin();it != l.end(); it++){
        cout<<*it<<" ";
    }
}

int main(){
    list<int> l1;
    list<int> l2(6);
    
    l1.push_back(4);
    l1.push_back(9);
    l1.push_back(1);
    l1.push_back(3);
    l1.push_back(2);

    list<int> :: iterator iter = l1.begin();

    display(l1);
    return 0;
}