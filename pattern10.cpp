#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int row = 1;
    // while(row<=n){
    //     int col = 1;
    //     while(col<=row){
    //         cout<<row-col+1<<" ";
    //         col += 1;
    //     }
    //     cout<<endl;
    //     row += 1;
    // }
    int row = 1;
    while(row<=n){
        int col = row;
        while(col>=1){
            cout<<col<<" ";
            col -= 1;
        }
        cout<<endl;
        row += 1;
    }
}