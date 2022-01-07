#include<iostream>
using namespace std;
/* 
structure of the example we are gonna use
            --------Stuudent------
            |                     | 
            V                     V
            test                 sports 
            |______________________|  
                        V
                      Result
*/

class Student{
    protected:
        int roll_no;
    public:
        void set_rollno(int a){
            roll_no = a;
        }
        void show(){
            cout<<"The roll no. is "<<roll_no<<endl;
        }
};

class Test: virtual public Student{
    protected:
        float maths,physics;
    public:
        void set_marks(int a,int b){
            maths = a;
            physics = b;
        }

        void print_marks(){
            cout<<"Your marks in maths is "<<endl
                <<maths<<endl
                <<"Your marks in physics is "<<endl
                <<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float s){
            score = s;
        }
        void show_score(void){
            cout<<"The score is "<<score<<endl; 
        }
};

class Result : public Sports, public Test{
    float total;
    public:
        void print_result(){
            total = maths + physics + score;
            show();
            print_marks();
            show_score();
            cout<<"Your total score is : "<<total<<endl;
        }

};

int main(){
    Result wam;
    wam.set_rollno(421);
    wam.set_marks(84,92);
    wam.set_score(82);
    wam.print_result();
    return 0;
}

/*
what is the purpose of virtual class
ans. if b and c are made from a and we make another class d which is inherited from b and c. it might get copies of the same elements 
that b and c got from a hance we use the concept of virtual base class. 
*/