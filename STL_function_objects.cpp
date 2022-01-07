#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

void display(int a[]){
    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,7,2,9,3,6};
    
    sort(arr,arr+5);
    display(arr);

    sort(arr,arr+6, greater<int>());
    display(arr);


    return 0;
}