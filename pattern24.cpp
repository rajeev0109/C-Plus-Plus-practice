#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        // spaces
        int space = 1;
        while(space<=row-1){
            cout<<" ";
            space += 1;
        }
        // Numbers
        int col = 1;
        int value = row;
        while(col<=n-row+1){
            cout<<value;
            value += 1;
            col += 1;
        }
        cout<<endl;
        row += 1;
    }

    return 0;
}