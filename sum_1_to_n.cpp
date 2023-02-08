#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cin>>n;
    // int i = 1;
    // while(i<=n){
    //     sum += i;
    //     i += 1;
    // }

    for(int i = 1; i<=n; i++){
        sum += i;
    }


    cout<<sum;

    return 0;
}