#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        // Space print kr le
        int space = 1;
        while(space<=row - 1){
            cout<<"  ";
            space += 1;
        }
        // int space = row - 1;
        // while(space){
        //     cout<<"  ";
        //     space -= 1;
        // }

        // Stars print kr le
        int col = n - row + 1;
        while(col){
            cout<<"* ";
            col -= 1;
        }
        cout<<endl;
        row += 1;

    }
    return 0;
}