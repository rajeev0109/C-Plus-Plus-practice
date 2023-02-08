#include<iostream>
using namespace std;
// 1 1 1
// 2 2 2
// 3 3 3

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<row<<" ";
            col += 1;
        }
        cout<<endl;
        row += 1;
    }
    return 0;
}