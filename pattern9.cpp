#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    // int count = 1;
    while(row<=n){

        int col = 1;
        // int count = row;
        while(col<=row){
            
            // cout<<count<<" ";
            // count += 1;
            cout<<row + col - 1<<" ";
            col += 1;
        }
        cout<<endl;
        row += 1;
    }
    return 0;
}