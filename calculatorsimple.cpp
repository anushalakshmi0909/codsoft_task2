
//Simple calculator

#include<iostream>
using namespace std;
int main(){
    //declaring variables
    double numerator,denominator,result;
    //declare character variable to read arithmetic operator as input
    char ch;
    //read first input
    cout<<"Enter first number: ";
    cin>>numerator;
    //read second input
    cout<<"Enter second number: ";
    cin>>denominator;
    //read arithmetic operator
    cout<<"Enter the arithmetic operation (+,-,*,/): "<<endl;
    cin>>ch;
    //switch statement to perform calculation
    switch(ch){
        case '+':
            result=numerator+denominator;
            cout<<"Addition of two numbers: "<<result;
            break;
        case '-':
            result=numerator-denominator;
            cout<<"Subtraction of two numbers: "<<result;
            break;
        case '*':
            result=numerator*denominator;
            cout<<"Multiplication of two numbers: "<<result;
            break;
        case '/':
            //try block to handle exceptions
            try{
                if(denominator==0)
                    throw 0;
                result=numerator/denominator;
                cout<<"Division of two numbers: "<<result;
            }
            //catch block to catch the integer exception thrown by try block
            catch(int num_exception){
                cout<<"Error: Cannot divide by "<<num_exception;
            }
            break;
    }
    return 0;
}
