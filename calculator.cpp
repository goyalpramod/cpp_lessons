#include<iostream>
#include<cmath>
using namespace std;

class Calculator{
    protected:
        int operation;
        float ans,num1,num2;
    public:
        
        void get_number(void){
            cout<<"Enter the first number"<<endl;
            cin>>num1;
            cout<<"Enter the second number"<<endl;
            cin>>num2;
            cout<<"Choose the operation you would like to perform"<<endl
                <<"1. add"<<endl
                <<"2. subtract"<<endl
                <<"3. multiply"<<endl
                <<"4. divide"<<endl;
            cin>>operation;
        }

        void calculate(void){
            switch(operation){
                case 1:
                    ans = num1 + num2;
                    break;
                case 2:
                    ans = num1 - num2;
                    break;
                case 3:
                    ans = num1*num2;
                    break;
                case 4:
                    ans = num1/num2;
                    break;   
            }
        }

        void print_ans(void){
            cout<<"The answer is "<<ans<<endl;
        }

};

class Scientific_calculator{
    protected:
        int operation;
        float ans,num1;
    public:
        
        void get_number(void){
            cout<<"Enter the first number"<<endl;
            cin>>num1;
            cout<<"Choose the operation you would like to perform"<<endl
                <<"1. square of num1"<<endl
                <<"2. square root of num1 "<<endl
                <<"3. find the sin of the number"<<endl
                <<"4. find the log of the number"<<endl;
            cin>>operation;
        }

        void calculate(void){
            switch(operation){
                case 1:
                    ans = pow(num1,2);
                    break;
                case 2:
                    ans = sqrt(num1);
                    break;
                case 3:
                    ans = sin(num1);
                    break;
                case 4:
                    ans = log(num1);
                    break;   
            }
        }

        void print_ans(void){
            cout<<"The answer is "<<ans<<endl;
        }

};

int main(){
    Calculator c1;
    c1.get_number();
    c1.calculate();
    c1.print_ans();

    Scientific_calculator c2;
    c2.get_number();
    c2.calculate();
    c2.print_ans();

    return 0;
}

/*
create two classes:
1. simple calculator: 2 input lega, 1 of the 4 operations of choice dega
2. scientific calculator, 4 operations of choice 
also display 
also make another hybridcalculator which will take both of the calculator and do da shid.
*/