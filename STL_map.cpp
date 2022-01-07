#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marksMap;

    marksMap["Ram"] = 32;
    marksMap["Bob"] = 72;
    marksMap["Sam"] = 91;

    map<string, int> :: iterator iter = marksMap.begin();

    for (iter;iter != marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    

    return 0;
}