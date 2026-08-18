    #include<iostream>
    using namespace std;
    class Rectangle {
            public:
                float length,breadth;
                float area;
                void input(){
                    cin>>length;
                    cin>>breadth;
                };
                void ar(){
                    area=length*breadth;
                    cout<<area<<endl;
                }
                void display(){
                    cout<<length<<breadth<<endl;
                }
        };
    int main(){
        Rectangle obj1;
        Rectangle obj2;
        cout<<"Enter the length and breadth of rectangle: ";
        cin>>obj1.length>>obj1.breadth;
        cout<<"Enter the length and breadth of rectangle: ";
        cin>>obj2.length>>obj2.breadth;
        obj1.display();
        obj2.display();
        obj1.ar();
        obj2.ar();
    };