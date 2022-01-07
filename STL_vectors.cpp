#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v1;
    int element;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Insert the element "<<endl;
        cin>>element;
        v1.push_back(element);
    }
    display(v1);
    vector<int> :: iterator iter = v1.begin();
    v1.insert(iter, 23);
    display(v1);
    v1.insert(iter+2,4,13);
    display(v1);
    return 0;
}