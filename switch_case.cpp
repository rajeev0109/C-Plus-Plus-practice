#include<iostream>
using namespace std;
// Simple Calculator using switch_case statement!!!!!!
int main(){

    int a, b;
    char op;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the operator: ";
    cin>>op;

    switch(op){

        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        case '%':
            cout<<a%b<<endl;
            break;
        default:
            cout<<"Invalid operator!";
    }
    return 0;
}