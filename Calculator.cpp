#include<bits/stdc++.h>
using namespace std;
int calculate(int a, int b){
    return a+b;
};
double calculate(double a, double b){
    return a+b;
};
int calculate(int a,int b, int c){
    return a+b+c;
};
string displayMessage(string message="Calculation Completed"){
    return message;
}
int main(){
    int a,b,c;
    string message;
    cout<<"Enter Your Values: ";
    cin>>a>>b>>c;
    cout<<"Enter Your Message: ";
    cin>>message;
    cout<<"Sum Of 2 Values: "<<calculate(a,b)<<endl;
    cout<<"Sum Of 3 Values: "<<calculate(a,b,c)<<endl;
    cout<<displayMessage()<<endl;
    cout<<displayMessage(message)<<endl;
}