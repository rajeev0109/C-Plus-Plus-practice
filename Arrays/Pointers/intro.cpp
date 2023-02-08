#include<iostream>
using namespace std;

int main(){

    int num=5;

    cout<<num;
    cout<<endl<<"Adress of num = "<<&num<<endl;

    int* ptr = &num;

    cout<<*ptr;


    return 0;

}