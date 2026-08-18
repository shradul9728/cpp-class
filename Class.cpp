#include<iostream>
using namespace std;
    class Student{
        public:
            string name;
            int roll_no;
            int marks;
            void member(){
                cout<<name<<" "<<roll_no<<" "<<marks<<endl;
            };
    };
int main(){
    Student obj1;
    Student obj2;
    cout<<"Enter your name,roll no. and marks: ";
    cin>>obj1.name>>obj1.roll_no>>obj1.marks;
    cout<<"Enter your name,roll no. and marks: ";
    cin>>obj2.name>>obj2.roll_no>>obj2.marks;
    obj1.member();
    obj2.member();
}