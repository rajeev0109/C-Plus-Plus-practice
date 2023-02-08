#include<iostream>
using namespace std;

int main(){

    int amount;
    cout<<"Enter the value of amount: ";
    cin>>amount;

    int r100, r50, r20, r1;

    switch(1){
        case 1:
            if(amount>=100){
                r100 = amount/100;
                amount %= 100;
                cout<<r100<<" of 100 notes ";
            }
            
        case 2:
            if(amount>=50){
                r50 = amount/50;
                amount %= 50;
                cout<<r50<<" of 50 notes ";
            }
            
        case 3:
            if(amount>=20){
                r20 = amount/20;
                amount %= 20;
                cout<<20<<" of 20 notes ";
            }
            
        case 4:
            if(amount>=1){
                r1 = amount/1;
                cout<<"and "<<r1<<" of 1 notes ";
            }
            
    }


    return 0;
}