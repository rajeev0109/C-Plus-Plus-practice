#include<iostream>
using namespace std;

int main(){
    int n, count = 0, i = 2;
    cin>>n;
    while(i <= (n/2)){
        if(n%i == 0){
            count += 1;
            break;
        }
        i += 1;
    }
    if(count == 1){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }
    return 0;
}