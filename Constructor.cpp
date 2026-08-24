#include<iostream>
using namespace std;
class RestaurantTable{
    int tableNumber,capacity;
    bool isOccupied;
    static int totalTables;
    public:
        RestaurantTable(){
            tableNumber=0;
            capacity=4;
            isOccupied=false;
            totalTables++;
        };
        void setTableDetails(){
            cin>>tableNumber>>capacity>>isOccupied;
        };
        void displayTableDetails(){
            cout<<tableNumber;
        };
        static void displayTotalTables(){
            cout<<totalTables;
        };
};
int RestaurantTable::totalTables = 0;
int main(){
    RestaurantTable obj1;
    RestaurantTable obj2;
    RestaurantTable obj3;
    obj1.setTableDetails();
    obj2.setTableDetails();
    obj3.setTableDetails();
    cout<<"Table1: "<<endl;
    obj1.displayTableDetails();
    cout<<"Table2: "<<endl;
    obj2.displayTableDetails();
    cout<<"Table3: "<<endl;
    obj3.displayTableDetails();
    cout << "Total Tables: ";
    RestaurantTable::displayTotalTables();
}