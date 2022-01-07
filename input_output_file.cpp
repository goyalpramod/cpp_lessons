#include<iostream>
#include<fstream>
using namespace std;

// These are some useful classes for working with files in C++
// fstreambase
// ifstream --> derived from fstreambase
// ofstream --> derived from fstreambase

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// Using the constructor
// Using the member function open() of the class

int main(){
    string s = "Kese hai vro";
    ofstream out("sample.txt"); // opening files using constructor and writing on it 
    out<<s;

    // opening a file and reading from it 
    // string s2;
    // ifstream in("sample2.txt");
    // in>>s2; (this will only get me the first word of the text file)
    // cout<<s2;

    string s3;
    ifstream in("sample3.txt");
    getline(in,s3); // this will get me the entire line 
    cout<<s3;

    return 0;
}