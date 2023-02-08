#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        // Space print kr lo
        int space = 1;
        while(space<=row -1){
            cout<<"  ";
            space += 1;
        }
        // Numbers print kr lo
        int col = n - row + 1;
        while(col){
            cout<<row<<" ";
            col -= 1;
        }
        cout<<endl;
        row += 1;
    }

    return 0;
}