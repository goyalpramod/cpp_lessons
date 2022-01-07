#include<string>
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream obj;
    obj.open("sample.txt");
    obj<<"This is a line \n";
    obj<<"This is another line";
    obj.close();

    ifstream in;
    string s1,s2;
    in.open("sample.txt");
    // in>>s1>>s2;
    // cout<<s1<<s2;
    while (in.eof() == 0)
    {
        getline(in,s1);
        cout<<s1<<endl;
    }
    
    in.close();
    return 0;
}