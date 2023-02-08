#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<i<<endl;
    // }

    // int i = 1;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i += 1;
    // }

    int i = 1;
    do{
        cout<<i<<endl;
        i += 1;
    }while(i<=n);

    return 0;
}