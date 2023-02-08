#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    int count = 1;
    while(row<=n){
        // Space print kr lo
        // int space = n - row;
        // while(space){
        //     cout<<"  ";
        //     space -= 1;
        // }
        int space = 1;
        while(space<= n - row){
            cout<<"  ";
            space += 1;
        }

        // Numbers print kr lo
        int col = 1;
        while(col <= row){
            cout<<count<<" ";
            count += 1;
            col += 1;
        }
        cout<<endl;
        row += 1;
    }



    return 0;
}