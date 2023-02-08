// Dabng pattern by bubber

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        // First triangle
        int col = 1;
        while(col<=n-row+1){
            cout<<col<<" ";
            col += 1;
        }


        // 2nd triangle 
        int star = 1;
        while(star<=row-1){
            cout<<"* * ";
            star += 1;
        }

        // int st = 1;               // We use this code when we do not use two star in the upper while loop and break the question into four triangle parts
        // while(st<=row-1){
        //     cout<<"* ";
        //     st += 1;
        // }


        // 3rd triangle 
        int value = n - row + 1;
        while(value){
            cout<<value<<" ";
            value -= 1;
        }

        cout<<endl;
        row += 1;
    }
}
