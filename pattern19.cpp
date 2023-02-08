#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row <=n){
        // Spaces ke liye
        // int space = 1;
        // while(space<=n-row){
        //     cout<<"  ";
        //     space += 1;
        // }
        int space = n - row;
        while(space>0){
            cout<<"  ";
            space -= 1;
        }

        // * ke liye
        int col = 1;
        while(col<=row){
            cout<<"* ";
            col += 1;
        }
        cout<<endl;
        row += 1;
    }
    return 0;
}