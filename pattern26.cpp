#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        // Print space
        int space = 1;
        while(space<=n-row){
            cout<<"  ";
            space += 1;
        }



        // Print first triangle
        int col = 1;
        while(col<=row){
            cout<<col<<" ";
            col += 1;
        }   



        // Print second triangle
        int value = row -1;
        while(value){
            cout<<value<<" ";
            value -= 1;
        }


        cout<<endl;
        row += 1;
    }



    return 0;
}