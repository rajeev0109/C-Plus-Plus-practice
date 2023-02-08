#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row =1;
    while(row<=n){
        int col = 1;
        char strt = 'A' + row - 1;
        while(col<=n){
            // char ch = 'A'+row+col-2;
            // cout<<ch<<" ";
            cout<<strt<<" ";
            strt += 1;
            col += 1;
        }
        cout<<endl;
        row += 1;
    }
}