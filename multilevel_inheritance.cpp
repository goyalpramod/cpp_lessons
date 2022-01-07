#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_num;
    public:
        void set_roll_num(int);
        void get_roll_no(void);
};

void Student :: set_roll_num(int a){
    roll_num = a;
}

void Student :: get_roll_no(){
    cout<<"The roll no. is "<<roll_num<<endl;
}

class Exam : public Student{
    protected:
        float physics;
        float maths;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(void){
    cout<<"The marks of physics and maths respectively are "<<physics<<" and "<<maths<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display(){
            get_roll_no();
            get_marks();
            cout<<"the total percentage is "<<(maths + physics)/2<<endl;
        }
};

int main(){
    Result sam;
    sam.set_roll_num(1);
    sam.set_marks(92.4,95.6);
    sam.display();
    return 0;
}

/*
Notes:
    if we are inheriting b from a and c from b: [A-->B-->-->C]
    1. a is base class of b and b is base class of c 
    2. a-->b-->-->c is called inheritance path
*/